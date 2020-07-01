#include "cube.h"

t_bool  is_xpm_file(char *file_path)
{
    int index;

    index = 0;
    if (ft_strlen(file_path) < 5)
        return (false);
    while (file_path[index] != '\0')
        index++;
    index -= 4;
    if (ft_strcmp(file_path + index, ".xpm") == false)
        return (false);
    return (true);
}