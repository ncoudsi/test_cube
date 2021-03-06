/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_side_dist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:22:58 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 16:01:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_side_dist(t_vector *value)
{
	g_engine->rcast_params->side_dist->x = value->x;
	g_engine->rcast_params->side_dist->y = value->y;
}
