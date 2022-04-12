/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liacovel <liacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:53:44 by liacovel          #+#    #+#             */
/*   Updated: 2022/04/12 22:10:33 by liacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	player_animation(t_player *player)
{
	if (player->framecount == player->idle_frames)
	{
		player->current_img = player->idle_img_0;
	}
	else if (player->framecount >= player->idle_frames * 2)
	{
		player->current_img = player->idle_img_1;
		player->framecount = 0;
	}
	player->framecount += 1;
}

static void	collec_animation(t_collect_img *img)
{
	static int	frame;

	if (img->anim_frames == 0)
		return ;
	if (frame == img->anim_frames)
	{
		img->current_img = img->img_0;
	}
	else if (frame >= img->anim_frames * 2)
	{
		img->current_img = img->img_1;
		frame = 0;
	}
	frame += 1;
}

// static void	effect_animation(t_effect *effect)
// {
// 	if (effect->counter < effect->frames)
// 		effect->counter++;
// }

/* Calculates all animations and render.
* Called once each frame */
int	update(t_game *game)
{
	player_animation(&game->player);
	collec_animation(&game->collects_imgs);
	render(*game);
	return (1);
}
