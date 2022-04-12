/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_wall_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:53:28 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 20:53:28 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	open_wallino(t_game *game)
{
	game->wall_imgs.wall = mlx_xpm_file_to_image(game->mlx,
			"sprites/wollo-tmp.xpm",
			&game->img_size.x, &game->img_size.y);
	game->wall_imgs.block = mlx_xpm_file_to_image(game->mlx,
			"sprites/home_0.xpm",
			&game->img_size.x, &game->img_size.y);
}
