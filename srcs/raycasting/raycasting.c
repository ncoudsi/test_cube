/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/10 14:34:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    raycasting()
{
	int	index;
	t_int_vector	map_pos_value;

	index = 0;
	while (index < resolution_x())
	{
		map_pos_value = create_int_vector(pos_x(), pos_y());
		set_map_pos(&map_pos_value);
		set_camera_x(2.0f * (float)index / resolution_x() - 1.0f);
		update_ray_dir_value();
		update_delta_dist_value();
		update_step_and_side_dist_values();
		set_hit(false);
		hitpoint_detection();
	if (side() == 0)
		set_perpendicular_wall_dist((map_pos_x() - pos_x() + (1.0f - step_x()) / 2.0f) / ray_dir_x());
	else
		set_perpendicular_wall_dist((map_pos_y() - pos_y() + (1.0f - step_y()) / 2.0f) / ray_dir_y());
		set_perp_wall_dist_tab(index, perpendicular_wall_dist());
		index++;
	}
}
