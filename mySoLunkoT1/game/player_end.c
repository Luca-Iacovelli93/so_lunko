/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:53:32 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 22:17:12 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	kill_player(t_game *game, t_vector pos)
{
	game->player.tile = NULL;
	// effect_anim(&game->effect, pos);
}

void	remove_player(t_game *game)
{
	game->player.tile->type = EMPTY;
	game->player.tile = NULL;
}
