/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_int_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 14:52:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 14:52:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	free_int_vector(t_int_vector *to_free)
{
	free(to_free);
}
