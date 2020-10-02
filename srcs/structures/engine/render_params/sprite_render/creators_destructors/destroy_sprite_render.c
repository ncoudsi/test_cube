/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_sprite_render.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:19:52 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 10:50:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_sprite_render(t_sprite_render to_destroy)
{
	free_sprite_tab(to_destroy.sprite_tab, sprite_nbr());
	free_vector(to_destroy.absolute_sprite_pos);
	free_vector(to_destroy.relative_sprite_pos);
	free_vector(to_destroy.transformed_pos);
	free_int_vector(to_destroy.sprite_texture_pos);
}