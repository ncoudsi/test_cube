/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_endian.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:59:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:00:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_endian(int value)
{
	g_engine->mlx_params->endian = value;
}
