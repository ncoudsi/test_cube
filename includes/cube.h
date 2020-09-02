/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 16:15:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

# include "cube_includes.h"

int			cube_file_fd();
/*
**  KEY_HANDLING
*/

int			key_press(int key);
int			key_release(int key);
t_bool		is_movement_key(int key);
t_bool      is_rotation_key(int key);

/*
**	RENDERING
*/

void		run_game();
int         update_game();
int			get_pixel_index(t_vector pos);
void		put_pixel(t_vector pos, t_color color);
void		draw_rectangle(t_vector pos, t_vector dimension, t_color color);
void		draw_circle(t_vector center, int radius, t_color color);
t_vector	get_minimap_tiles_nbr();
t_vector	get_tile_size(t_vector minimap_size);
t_vector	map_pos_to_pixel_pos(t_vector map_pos);
void		render_map();
void        update_map();
void		render_wall(t_vector map_index);
void		render_tile(t_vector map_index);
void		render_player();

/*
**	MATHS
*/

float		distance_calculation(t_vector starting_point, t_vector end_point);
#endif
