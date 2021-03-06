/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:02:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 13:48:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_moves	create_moves(void)
{
	t_moves	result;

	result.forward = false;
	result.backward = false;
	result.right = false;
	result.left = false;
	result.rotation_right = false;
	result.rotation_left = false;
	return (result);
}
