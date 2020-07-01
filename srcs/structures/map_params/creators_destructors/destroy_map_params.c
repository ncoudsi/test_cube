#include "cube.h"

void    destroy_map_params(t_map_params to_destroy)
{
    ft_free_tab((void **)to_destroy.resolution);
    ft_free_tab((void **)to_destroy.no_textures);
    ft_free_tab((void **)to_destroy.so_textures);
    ft_free_tab((void **)to_destroy.we_textures);
    ft_free_tab((void **)to_destroy.ea_textures);
    ft_free_tab((void **)to_destroy.sprite_textures);
    ft_free_tab((void **)to_destroy.ceiling_colors);
    ft_free_tab((void **)to_destroy.floor_colors);
    ft_free_tab((void **)to_destroy.map);
}