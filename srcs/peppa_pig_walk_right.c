/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_walk_right.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:50:20 by emtran            #+#    #+#             */
/*   Updated: 2021/11/15 11:46:15 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	to_right_for_bacons(t_game *game)
{
	game->map->collect--;
	if (game->map->super_peppa_sale == 0)
	{
		game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] = \
		'P';
		game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = '0';
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.smile_r, (game->map->pos_x_play + 1) * 80, \
		game->map->pos_y_play * 80);
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.background, game->map->pos_x_play * 80, \
		game->map->pos_y_play * 80);
	}
	else
	{
		game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] = \
		'P';
		game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = 'B';
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_sale_d, (game->map->pos_x_play + 1) * 80, \
		game->map->pos_y_play * 80);
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.pas_mud, game->map->pos_x_play * 80, \
		game->map->pos_y_play * 80);
	}
}

void	to_right_to_be_sale(t_game *game)
{
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = 'B';
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.peppa_mud_d, (game->map->pos_x_play + 1) * 80, \
	game->map->pos_y_play * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.background, \
	game->map->pos_x_play * 80, game->map->pos_y_play * 80);
	game->map->super_peppa_sale = 1;
}

void	to_right_to_be_continued_sale(t_game *game)
{
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = 'B';
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.peppa_sale_d, (game->map->pos_x_play + 1) * 80, \
	game->map->pos_y_play * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.pas_mud, \
	game->map->pos_x_play * 80, game->map->pos_y_play * 80);
}

void	peppa_is_rightly_a_good_pig_girl(t_game *game)
{
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = '0';
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.peppa_r, \
	(game->map->pos_x_play + 1) * 80, game->map->pos_y_play * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.background, \
	game->map->pos_x_play * 80, game->map->pos_y_play * 80);
}

void	peppa_walks_right(t_game *game)
{
	if (game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] \
	!= '1' && time_to_play_with_george(game, 1) != 1)
	{
		if (game->map->mappy[game->map->pos_y_play][game->map->pos_x_play + 1] \
		== 'C')
			to_right_for_bacons(game);
		else if (game->map->mappy[game->map->pos_y_play] \
		[game->map->pos_x_play + 1] == 'A')
			peppa_becomes_bacon(game);
		else if (game->map->mappy[game->map->pos_y_play] \
		[game->map->pos_x_play + 1] == 'B' && game->map->super_peppa_sale == 0)
		{
			to_right_to_be_sale(game);
			vive_la_gadou();
		}
		else if (game->map->super_peppa_sale == 1)
			to_right_to_be_continued_sale(game);
		else
			peppa_is_rightly_a_good_pig_girl(game);
		game->map->pos_x_play++;
		game->map->eye_peppa = 1;
		butcher_stalking(game);
		peppa_counts_her_foolishness(game);
		snack_of_george_is_coming(game);
	}
}
