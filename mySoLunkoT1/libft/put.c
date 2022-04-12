/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:58:43 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 20:58:43 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/* Writes char <c> in the file descripted by <fd>. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* Writes <str> in the file descripted by <fd>. */
void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
}

/* Writes <str> in the file descripted by <fd> followed by \n. */
void	ft_putendl_fd(char	*str, int fd)
{
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
}
