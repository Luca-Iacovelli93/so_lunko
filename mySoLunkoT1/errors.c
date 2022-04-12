/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:52:41 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 21:15:31 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

/* Returns 0 printing <message> in red */
int	error(char *message)
{
	ft_putstr_fd("\033[0;31m" " Error\n    ", 0);
	ft_putstr_fd(message, 0);
	ft_putstr_fd("\n", 0);
	ft_putstr_fd("\033[0m\0", 0);
	return (0);
}

/* Returns NULL printing <message> in red */
void	*null_error(char *message)
{
	ft_putstr_fd("\033[0;31m" " Error\n    ", 0);
	ft_putstr_fd(message, 0);
	ft_putstr_fd("\n", 0);
	ft_putstr_fd("\033[0m\0", 0);
	return (0);
}

/* Prints <message> in yellow */
void	print_warning(char *message)
{
	ft_putstr_fd("\033[0;33m" " Warning\n    ", 0);
	ft_putstr_fd(message, 0);
	ft_putstr_fd("\n", 0);
	ft_putstr_fd("\033[0m\0", 0);
}
