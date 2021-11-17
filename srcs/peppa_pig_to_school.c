/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_to_school.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:36:35 by emtran            #+#    #+#             */
/*   Updated: 2021/11/12 14:47:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	the_beauty_of_nature_without_peppa(t_game *game, int x, int y)
{
	if (y == 0 && x == 3)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.cloud_a, game->img.pos_x, game->img.pos_y);
	else if (y == 0 && x == game->map->len - 3 && game->map->len > 7)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.house, game->img.pos_x, game->img.pos_y);
	else if (y == 0 && x == (game->map->len / 2) && game->map->len >= 6)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.sun, game->img.pos_x, game->img.pos_y);
	else if (y == 0 && x == (game->map->len / 2) - 2 && game->map->len > 8)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.cloud_b, game->img.pos_x, game->img.pos_y);
	else if (y == 0 && x == 8 && game->map->len > 12)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.cloud_a, game->img.pos_x, game->img.pos_y);
	else if (y == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.sky, game->img.pos_x, game->img.pos_y);
	else if (x < (game->map->len / 2))
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.buisson_l, game->img.pos_x, game->img.pos_y);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.buisson_d, game->img.pos_x, game->img.pos_y);
}

void	hunter_follows_peppa_to_school(t_game *game, int x)
{
	if (x <= game->map->pos_x_play)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.butcher_d, game->img.pos_x, game->img.pos_y);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.butcher_l, game->img.pos_x, game->img.pos_y);
}

void	map_to_reality(t_game *game, int pos_x, int pos_y)
{
	if (game->map->mappy[pos_y][pos_x] == '1')
		the_beauty_of_nature_without_peppa(game, pos_x, pos_y);
	if (game->map->mappy[pos_y][pos_x] == '0')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.background, game->img.pos_x, game->img.pos_y);
	if (game->map->mappy[pos_y][pos_x] == 'C')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.bacon, game->img.pos_x, game->img.pos_y);
	if (game->map->mappy[pos_y][pos_x] == 'E')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.george, game->img.pos_x, game->img.pos_y);
	if (game->map->mappy[pos_y][pos_x] == 'P')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.peppa_l, game->img.pos_x, game->img.pos_y);
	if (game->map->mappy[pos_y][pos_x] == 'B')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.mud, game->img.pos_x, game->img.pos_y);
	if (game->map->mappy[pos_y][pos_x] == 'A')
		hunter_follows_peppa_to_school(game, pos_x);
}
