/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmp_rendering.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:27:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 10:30:32 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Drawing the ceiling part of the stripe.
*/

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

/*
**	Drawing the wall part of the stripe.
*/

static void	render_wall(t_int_vector *camera_index)
{
	float	float_text_y;

	while (camera_index->y < wall_bottom())
	{
		calculate_texture_step(camera_index);
		float_text_y = (wall_top() - resolution_y() / 2 + wall_height() / 2)
		* texture_step();
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

/*
**	Drawing the floor part of the stripe.
*/

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

/*
**	Drawing sprites. The further ones from the camera first,
**	the closer ones next.
*/

static void	render_sprites(void)
{
	int				sprite_index;

	sprite_index = 0;
	while (sprite_index < sprite_nbr())
	{
		set_sprite_params_values(sprite_index);
		render_sprite();
		sprite_index++;
	}
}

/*
**	Going throught every pixel (in x axis) of the screen to draw stripe
**	by stripe. For each stripe we draw from the top to the bottom (ceiling>
**	wall>floor). Only afterwards, we draw all the sprites and the minimap.
*/

void		bmp_rendering(void)
{
	t_int_vector	camera_index;

	camera_index = create_int_vector(0, 0);
	while (camera_index.x < resolution_x())
	{
		camera_index.y = 0;
		set_texture_params_values(camera_index.x);
		render_ceiling(&camera_index);
		render_wall(&camera_index);
		render_floor(&camera_index);
		camera_index.x++;
	}
	render_sprites();
	render_minimap();
}
