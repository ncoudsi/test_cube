/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_relative_sprite_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:56:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:32:15 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector const	*relative_sprite_pos(void)
{
	return (g_engine->render_params->sprite_params->relative_sprite_pos);
}
