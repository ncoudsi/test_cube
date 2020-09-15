/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_engine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:05:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 12:12:43 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_engine()
{
	free_map_params(g_engine->map_params);
	free_mlx_params(g_engine->mlx_params);
	free_player(g_engine->player);
	free_rcast_params(g_engine->rcast_params);
	free_render_params(g_engine->render_params);
}
