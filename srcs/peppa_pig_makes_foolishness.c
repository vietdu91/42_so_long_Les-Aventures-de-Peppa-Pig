/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_makes_foolishness.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:00:59 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 15:00:06 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	why_str_are_on_the_sky(t_game *game, int pos_img_x, int pos_map_x)
{
	if (pos_map_x == 3)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.cloud_a, pos_img_x, 0);
	else if (game->map->pos_x == game->map->len - 3 && game->map->len > 7)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.house, pos_img_x, 0);
	else if (game->map->pos_x == (game->map->len / 2) && game->map->len >= 6)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.sun, pos_img_x, 0);
	else if (game->map->pos_x == (game->map->len / 2) - 2 && game->map->len > 8)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.cloud_b, pos_img_x, 0);
	else if (game->map->pos_x == 8 && game->map->len > 12)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.cloud_a, pos_img_x, 0);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.sky, pos_img_x, 0);
}

void	there_is_something_in_the_sky(t_game *game)
{
	char	*count;

	count = ft_itoa(game->moves);
	game->img.pos_x = 0;
	game->map->pos_x = 0;
	while (game->img.pos_x < game->map->len * 80)
	{
		why_str_are_on_the_sky(game, game->img.pos_x, game->map->pos_x);
		game->img.pos_x += 80;
		game->map->pos_x++;
	}
	mlx_string_put(game->mlx_ptr, game->win_ptr, 30, 30, 0xFF0000, \
	"Peppa maked ");
	mlx_string_put(game->mlx_ptr, game->win_ptr, 104, 30, 0xFF00, count);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 125, 30, 0xFF0000, \
	" steps to take delicious bacons!");
	free(count);
}

void	peppa_counts_her_foolishness(t_game *game)
{
	int	j;

	j = -1;
	game->moves++;
	ft_putstr("|  Peppa a fait \033[1;35m", 1);
	ft_putnbr(game->moves, 1);
	ft_putstr("\033[0m\033[36m pas pour preparer \033[1;31mTHE SUPER", 1);
	ft_putstr(" GOUTER WITH CARAMELIZED BACON \033[0m\033[36m", 1);
	ft_putstr(" avec George, son petit con de frere.", 1);
	while (++j < 9 - ft_nbrlen(game->moves))
		ft_putchar(' ', 1);
	ft_putstr("|\n", 1);
	ft_putstr("|_____________________________________", 1);
	ft_putstr("________________________________", 1);
	ft_putstr("___________________________________________________|\n", 1);
	ft_putstr("|                                                        ", 1);
	ft_putstr("                                                   ", 1);
	ft_putstr("             |\n", 1);
	there_is_something_in_the_sky(game);
}
