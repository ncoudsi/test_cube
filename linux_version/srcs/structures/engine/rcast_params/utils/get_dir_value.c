/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dir_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:22:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 16:30:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating the direction vector of the player. The only difference between
**	player direction and player forward is the length of the vector. Here,
**	calculated with DIR_LENGTH.
*/

t_vector	get_dir_value(void)
{
	t_vector	result;

	result.x = cosf(pitch()) * DIR_LENGTH;
	result.y = -(sinf(pitch())) * DIR_LENGTH;
	return (result);
}
