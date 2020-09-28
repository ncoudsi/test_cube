/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:38:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/28 09:31:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	render_ceiling(t_int_vector *camera_index)
{
	t_color	ceiling_color;

	ceiling_color = create_color(70, 100, 225);
	while (camera_index->y < wall_top())
	{
		put_pixel(*camera_index, ceiling_color);
		camera_index->y++;
	}
}

static void calculate_texture_step(t_int_vector *camera_index)
{
	if (side_tab_index(camera_index->x) == 0)
		set_texture_step(1.0f * g_engine->map_params->we_texture->dimension->y / (float)wall_height());
	else if (side_tab_index(camera_index->x) == 1)
		set_texture_step(1.0f * g_engine->map_params->no_texture->dimension->y / (float)wall_height());
	else if (side_tab_index(camera_index->x) == 2)
		set_texture_step(1.0f * g_engine->map_params->ea_texture->dimension->y / (float)wall_height());
	else if (side_tab_index(camera_index->x) == 3)
		set_texture_step(1.0f * g_engine->map_params->so_texture->dimension->y / (float)wall_height());
}

static void	render_wall(t_int_vector *camera_index)
{
	float	float_text_y;

	while (camera_index->y < wall_bottom())
	{
		calculate_texture_step(camera_index);
		float_text_y = (wall_top() - resolution_y() / 2 + wall_height() / 2) * texture_step();
		float_text_y += ((camera_index->y - wall_top()) * texture_step());
		set_texture_pos_y((int)float_text_y);
		set_texture_pos_x(texture_pos_x_tab_index(camera_index->x));
		if (side_tab_index(camera_index->x) == 0)
			we_texture_color(camera_index);
		else if (side_tab_index(camera_index->x) == 1)
			no_texture_color(camera_index);
		else if (side_tab_index(camera_index->x) == 2)
			ea_texture_color(camera_index);
		else
			so_texture_color(camera_index);
		camera_index->y++;
	}
}

static void	render_floor(t_int_vector *camera_index)
{
	t_color	floor_color;

	floor_color = create_color(200, 150, 20);
	while (camera_index->y < resolution_y())
	{
		put_pixel(*camera_index, floor_color);
		camera_index->y++;
	}
}

void	rendering()
{
	t_int_vector	camera_index;

	mlx_do_sync(mlx_ptr());
	camera_index = create_int_vector(0, 0);
	while (camera_index.x < resolution_x())
	{
		camera_index.y = 0;
		set_wall_height((int)(resolution_y() / perp_wall_dist_tab_index(camera_index.x)));
		set_wall_bottom(wall_height() / 2 + resolution_y() / 2);
		if (wall_bottom() > resolution_y())
			set_wall_bottom(resolution_y());
		set_wall_top(-wall_height() / 2 + resolution_y() / 2);
		if (wall_top() < 0)
			set_wall_top(0);
		render_ceiling(&camera_index);
		render_wall(&camera_index);
		render_floor(&camera_index);
		camera_index.x++;
	}
	// render_minimap();
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
}
