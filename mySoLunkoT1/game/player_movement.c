/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:53:35 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/19 20:31:00 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_to_empty(t_game *game, t_tile *tile)
{
	tile->type = PLAYER;
	if (game->player.tile->type != EXIT)
		game->player.tile->type = EMPTY;
	game->player.tile = tile;
}

void	pick_collect(t_game *game, t_tile *tile)
{
	tile->type = EMPTY;
	game->collects--;
}

void	move_to_exit(t_game *game, t_tile *tile)
{
	remove_player(game);
	game->collects = -1;
}
