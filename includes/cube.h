/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 20:31:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

# include "cube_includes.h"

int		cube_file_fd();
/*
**  KEY_HANDLING
*/

int		key_handler(int key);

/*
**	APPLICATION
*/

void	run_application(t_engine *engine);
int		get_pixel_index(t_vector pos, t_engine engine);
#endif
