/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:05:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/07 13:20:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int key_handler(int key)
{
    ft_putnbr(key);
    ft_putchar('\n');
    if (key == ESC_KEY)
        exit(0);
    return (key);
}