/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_tile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:05:54 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/13 15:18:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_tile(t_vector map_index)
{
	t_vector	size;
	t_vector	pos;
	t_color		color;

	size = get_tile_size(get_minimap_tiles_nbr());
	pos = create_vector(map_index.x * size.x, map_index.y * size.y);
	color = create_color(TILE_COLOR);
	draw_rectangle(pos, size, color);
}