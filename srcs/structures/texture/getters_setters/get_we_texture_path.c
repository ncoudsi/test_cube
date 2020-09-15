/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_we_texture_path.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:06:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 16:06:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

char	*we_texture_path()
{
	return (g_engine->map_params->we_texture->path);
}