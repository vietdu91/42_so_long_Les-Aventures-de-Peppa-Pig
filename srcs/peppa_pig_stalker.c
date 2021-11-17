/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_stalker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:28:14 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:45:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	keen_gaze_of_butcher(t_game *game, int x, int y)
{
	if (game->map->mappy[y][x - 1] == '0')
	{
		game->map->mappy[y][x - 1] = 'A';
		game->map->mappy[y][x] = '0';
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.butcher_l, (x - 1) * 80, y * 80);
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.background, x * 80, y * 80);
	}
	else
		game->map->eye_butcher = 0;
}

void	desire_to_kill_peppa(t_game *game, int x, int y)
{
	if (game->map->mappy[y][x + 1] == '0')
	{
		game->map->mappy[y][x + 1] = 'A';
		game->map->mappy[y][x] = '0';
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.butcher_d, (x + 1) * 80, y * 80);
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.background, x * 80, y * 80);
	}
	else
		game->map->eye_butcher = 1;
}

void	butcher_like_dexter(t_game *game, int x, int y)
{
	while (x < game->map->len)
	{
		if (game->map->mappy[y][x] == 'A')
		{
			if (game->map->eye_butcher == 1)
				keen_gaze_of_butcher(game, x, y);
			else if (game->map->eye_butcher == 0)
			{
				desire_to_kill_peppa(game, x, y);
				x++;
			}
		}
		x++;
	}
}

void	butcher_stalking(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->map->lines)
	{
		x = 0;
		butcher_like_dexter(game, x, y);
		y++;
	}
}
