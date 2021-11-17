/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_and_her_connard_of_brother.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:51:20 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 15:27:09 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	snack_of_george_is_coming(t_game *game)
{
	int	x;
	int	y;

	if (game->map->collect == 0)
	{
		y = 0;
		while (y < game->map->lines)
		{
			x = 0;
			while (x < game->map->len)
			{
				if (game->map->mappy[y][x] == 'E')
					mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
					game->img.smile_george, x * 80, y * 80);
				x++;
			}
			y++;
		}
	}
}

int	time_to_eat_bacons(t_game *game, int x, int y)
{
	if (game->map->mappy[y][x] == 'E' && game->map->collect == 0)
		peppa_fucks_and_loves_bacon(game);
	else if (game->map->mappy[y][x] == 'E')
	{
		ft_putstr("|  George cria avec insistance : \033[1;35m", 1);
		ft_putstr(" OU SONT MES BACONS ?!! OUIN OUIN OUIN OUIN !!!", 1);
		ft_putstr(" JE VEUX MES BACONS !!!", 1);
		ft_putstr("\033[0m\033[36m                  |\n", 1);
		ft_putstr("|_____________________________________", 1);
		ft_putstr("________________________________", 1);
		ft_putstr("___________________________________________________|\n", 1);
		ft_putstr("|                                                 ", 1);
		ft_putstr("       ", 1);
		ft_putstr("                                                   ", 1);
		ft_putstr("             |\n", 1);
		return (1);
	}
	return (0);
}

int	time_to_play_with_george(t_game *game, int direction)
{
	if (direction == 1)
		return (time_to_eat_bacons(game, game->map->pos_x_play + 1, \
		game->map->pos_y_play));
	else if (direction == 2)
		return (time_to_eat_bacons(game, game->map->pos_x_play - 1, \
		game->map->pos_y_play));
	else if (direction == 3)
		return (time_to_eat_bacons(game, game->map->pos_x_play, \
		game->map->pos_y_play - 1));
	else if (direction == 4)
		return (time_to_eat_bacons(game, game->map->pos_x_play, \
		game->map->pos_y_play + 1));
	return (0);
}
