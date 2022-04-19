/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:53:32 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/19 20:11:15 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	remove_player(t_game *game)
{
	game->player.tile->type = EMPTY;
	game->player.tile = NULL;
}
