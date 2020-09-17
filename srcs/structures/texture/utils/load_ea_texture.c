/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_ea_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:48:36 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 14:25:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "cube.h"

void	load_ea_texture()
{
t_texture	*tmp_texture;

	tmp_texture = (t_texture *)ea_texture();
	set_text_ptr(mlx_xpm_file_to_image(mlx_ptr(), tmp_texture->path,
	&tmp_texture->dimension->x, &tmp_texture->dimension->y), tmp_texture);
	tmp_texture->texels = mlx_get_data_addr(tmp_texture->text_ptr,
	&tmp_texture->bits_per_texel, &tmp_texture->text_size_line, &tmp_texture->text_endian);
}
