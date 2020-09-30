/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:10:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 13:44:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_player	create_player()
{
	t_player	result;

	result.pos = NULL;
	result.forward = NULL;
	result.right = NULL;
	result.moves = NULL;
	result.move_speed = MOVE_SPEED;
	result.rotation_speed = M_PI / 16.0f;
	result.pitch = 0;
	return (result);
}
