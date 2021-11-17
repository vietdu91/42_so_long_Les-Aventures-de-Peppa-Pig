/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_walk_with_bacons.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:28:27 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:46:37 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	fried_bacon_to_up(t_game *game)
{
	game->map->mappy[game->map->pos_y_play - 1][game->map->pos_x_play] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = '0';
	if (game->map->eye_peppa == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.smile_l, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.smile_r, game->map->pos_x_play * 80, \
		(game->map->pos_y_play - 1) * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.background, \
	game->map->pos_x_play * 80, game->map->pos_y_play * 80);
}

void	caramalized_bacon_up_like_gros_degueu(t_game *game)
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

void	fried_bacon_to_down(t_game *game)
{
	game->map->mappy[game->map->pos_y_play + 1][game->map->pos_x_play] = 'P';
	game->map->mappy[game->map->pos_y_play][game->map->pos_x_play] = '0';
	if (game->map->eye_peppa == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.smile_l, game->map->pos_x_play * 80, \
		(game->map->pos_y_play + 1) * 80);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.smile_r, game->map->pos_x_play * 80, \
		(game->map->pos_y_play + 1) * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.background, game->map->pos_x_play * 80, \
	game->map->pos_y_play * 80);
}

void	caramalized_bacon_down_like_gros_degueu(t_game *game)
{
	game->map->mappy[game->map->pos_y_play + 1][game->map->pos_x_play] = 'P';
	game->map->mappy[game->map->pos_y_play + 1][game->map->pos_x_play] = 'B';
	if (game->map->eye_peppa == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_sale_l, game->map->pos_x_play * 80, \
		(game->map->pos_y_play + 1) * 80);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_sale_d, game->map->pos_x_play * 80, \
		(game->map->pos_y_play + 1) * 80);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.pas_mud, game->map->pos_x_play * 80, game->map->pos_y_play * 80);
}

void	vive_la_gadou(void)
{
	ft_putstr("|  Toi aussi, tu aimes la gadou ? \033[1;35m", 1);
	ft_putstr(" Alors VIENS REJOINDRE PEPPA DANS LA GADOU ! ", 1);
	ft_putstr("YEEEEEEAAAAAH !!!", 1);
	ft_putstr("\033[0m\033[36m                         |\n", 1);
	ft_putstr("|_____________________________________", 1);
	ft_putstr("________________________________", 1);
	ft_putstr("___________________________________________________|\n", 1);
	ft_putstr("|                                                        ", 1);
	ft_putstr("                                                   ", 1);
	ft_putstr("             |\n", 1);
}
