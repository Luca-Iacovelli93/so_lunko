/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:53:41 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 20:53:41 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/* Returns the game to its original state */
int	reset(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->tilemap[y] != NULL)
	{
		x = 0;
		while (game->tilemap[y][x].type != 0)
		{
			game->tilemap[y][x].type = game->tilemap[y][x].og_type;
			if (game->tilemap[y][x].type == PLAYER)
				game->player.tile = &game->tilemap[y][x];
			x++;
		}
		y++;
	}
	game->moves = 0;
	game->collects = game->og_collects;
	mlx_put_image_to_window(game->mlx, game->window, game->white_panel, 0, 0);
	return (0);
}
