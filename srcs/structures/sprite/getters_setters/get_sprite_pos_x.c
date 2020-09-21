/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_pos_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:33:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:34:44 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	sprite_pos_x(int sprite_index)
{
	return (g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_pos->x);
}