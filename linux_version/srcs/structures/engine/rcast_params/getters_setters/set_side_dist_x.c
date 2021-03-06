/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_side_dist_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 16:00:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 16:02:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_side_dist_x(float value)
{
	g_engine->rcast_params->side_dist->x = value;
}
