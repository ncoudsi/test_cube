/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:29:49 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:29:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_map_params    create_map_params()
{
    t_map_params    result;

    result.resolution = NULL;
    result.no_texture = NULL;
    result.so_texture = NULL;
    result.we_texture = NULL;
    result.ea_texture = NULL;
    result.sprite_texture = NULL;
    result.ceiling_color = NULL;
    result.floor_color = NULL;
    result.map = NULL;
    result.map_size = NULL;
	result.cardinal_point = '\0';
    return (result);
}
