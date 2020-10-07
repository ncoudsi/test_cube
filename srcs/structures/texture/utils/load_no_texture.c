/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_no_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:24:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 16:05:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_no_texture(void)
{
	t_texture	*tmp_texture;

	tmp_texture = (t_texture *)no_texture();
	set_text_ptr(mlx_xpm_file_to_image(mlx_ptr(), tmp_texture->path,
	&tmp_texture->dimension->x, &tmp_texture->dimension->y), tmp_texture);
	if (text_ptr(tmp_texture) == NULL)
		error_exit(XPM_ERROR);
	tmp_texture->texels = mlx_get_data_addr(tmp_texture->text_ptr,
	&tmp_texture->bits_per_texel, &tmp_texture->text_size_line,
	&tmp_texture->text_endian);
}
