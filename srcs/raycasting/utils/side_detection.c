/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_detection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:19:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 16:06:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	side_detection()
{
	if (side() == 0 && ray_dir_x() > 0)
		set_side(0);
	else if (side() == 0 && ray_dir_x() < 0)
		set_side(2);
	else if (side() == 1 && ray_dir_y() > 0)
		set_side(1);
	else if (side() == 1 && ray_dir_y() < 0)
		set_side(3);
}