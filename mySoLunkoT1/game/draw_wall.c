/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:52:58 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 20:52:58 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_bool	draw_wallino(t_tile tile, t_game game, t_vector pos)
{
	if (tile.position.x == 0 || tile.position.y == 0 ||
		tile.position.x == game.wndw_size.x - IMG_SIZE ||
		tile.position.y == game.wndw_size.y - IMG_SIZE)
		mlx_put_image_to_window(game.mlx, game.window,
			game.wall_imgs.wall, pos.x, pos.y);
	else
		return (FALSE);
	return (TRUE);
}

/* Draws the corresponding sprite for the wall at <pos> */
void	draw_wall(t_tile tile, t_game game, t_vector pos)
{
	if (draw_wallino(tile, game, pos))
		return ;
	mlx_put_image_to_window(game.mlx, game.window,
		game.wall_imgs.block, pos.x, pos.y);
}
