/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_pos_to_pixel_pos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:55:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 14:28:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	map_pos_to_pixel_pos(t_vector map_pos)
{
	t_vector	result;
	t_vector	map_size;
	t_vector	tile_size;

	map_size = get_minimap_tiles_nbr();
	tile_size = get_minimap_tile_size(map_size);
	result.x = ((resolution_x() / (map_size.x / map_pos.x))) / 5;
	result.y = (resolution_y() / (map_size.y / map_pos.y)) / 5;
	return (result);
}
