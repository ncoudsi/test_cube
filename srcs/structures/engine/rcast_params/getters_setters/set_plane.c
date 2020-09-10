/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_plane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:48:56 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 11:49:29 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    set_plane(t_vector *value)
{
    g_engine->rcast_params->plane->x = value->x;
    g_engine->rcast_params->plane->y = value->y;
}