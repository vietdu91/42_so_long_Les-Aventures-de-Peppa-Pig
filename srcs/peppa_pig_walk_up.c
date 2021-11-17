/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_walk_up.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:17:30 by emtran            #+#    #+#             */
/*   Updated: 2021/11/15 11:46:25 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	to_up_for_bacons(t_game *game)
{
	game->map->collect--;
	if (game->map->super_peppa_sale == 0)
		fried_bacon_to_up(game);
	else
		caramalized_bacon_up_like_gros_degueu(game);
}

void	to_up_to_be_sale(t_game *game)
{
	game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = 'B';
	if (game->map->eye_peppa == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_mud_l, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_mud_d, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.background, game->map->pos_x_play * 80, \
	game->map->pos_y_play * 80);
	game->map->super_peppa_sale = 1;
}

void	to_up_to_be_continued_sale(t_game *game)
{
	game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] = 'P';
	game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] = 'B';
	if (game->map->eye_peppa == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_sale_l, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_sale_d, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.pas_mud, game->map->pos_x_play * 80, \
	game->map->pos_y_play * 80);
}

void	peppa_is_upply_a_good_pig_girl(t_game *game)
{
	game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = '0';
	if (game->map->eye_peppa == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_l, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_r, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.background, game->map->pos_x_play * 80, \
	game->map->pos_y_play * 80);
}

void	peppa_walks_up(t_game *game)
{
	if (game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] \
	!= '1' && time_to_play_with_george(game, 3) != 1)
	{
		if (game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] \
		== 'C')
			to_up_for_bacons(game);
		else if (game->map->mappy[game->map->pos_y_play - 1] \
		[game->map->pos_x_play] == 'A')
			peppa_becomes_bacon(game);
		else if (game->map->mappy[game->map->pos_y_play - 1] \
		[game->map->pos_x_play] == 'B' && game->map->super_peppa_sale == 0)
		{
			to_up_to_be_sale(game);
			vive_la_gadou();
		}
		else if (game->map->super_peppa_sale == 1)
			to_up_to_be_continued_sale(game);
		else
			peppa_is_upply_a_good_pig_girl(game);
		game->map->pos_y_play--;
		butcher_stalking(game);
		peppa_counts_her_foolishness(game);
		snack_of_george_is_coming(game);
	}
}
