/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:58:29 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 20:58:29 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creates -with malloc- an array with <count> elements of 
<size> bytes and fills it with '\0' chars */
void	*ft_calloc(size_t count, size_t size)
{
	void	*output;

	output = malloc(count * size);
	if (output == 0)
		return (NULL);
	ft_bzero(output, count * size);
	return (output);
}
