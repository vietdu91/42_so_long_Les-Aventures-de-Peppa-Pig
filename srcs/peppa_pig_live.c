/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_live.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:01:16 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:44:49 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	game_become_reality(t_game *game)
{
	game->intro_or_not = 0;
	if (game->win_ptr == NULL)
		return (-1);
	while (game->img.pos_y < game->map->lines * 80)
	{
		game->img.pos_x = 0;
		game->map->pos_x = 0;
		while (game->img.pos_x < game->map->len * 80)
		{
			map_to_reality(game, game->map->pos_x, game->map->pos_y);
			game->img.pos_x += 80;
			game->map->pos_x++;
		}
		game->img.pos_y += 80;
		game->map->pos_y++;
	}
	return (0);
}

int	peppa_use_her_feet(int key_code, t_game *game)
{
	if (key_code == ESC)
		suicide_of_peppa_pig(game);
	if (key_code == KEY_D && game->intro_or_not == 0)
		peppa_walks_right(game);
	if (key_code == KEY_A && game->intro_or_not == 0)
		peppa_walks_left(game);
	if (key_code == KEY_W && game->intro_or_not == 0)
		peppa_walks_up(game);
	if (key_code == KEY_S && game->intro_or_not == 0)
		peppa_walks_down(game);
	if (key_code == ESP && game->intro_or_not == 2)
		game_become_reality(game);
	if (key_code == ESP && game->intro_or_not == 1)
		thank_you_my_friends(game);
	if (key_code == ESP && game->intro_or_not == 3)
		suicide_of_peppa_pig(game);
	return (0);
}

void	hunting_for_bacons(t_game *game)
{
	mlx_key_hook(game->win_ptr, &peppa_use_her_feet, game);
	mlx_hook(game->win_ptr, 33, 131072, &suicide_of_peppa_pig, game);
	game_become_reality(game);
	mlx_loop(game->mlx_ptr);
}

int	birth_of_peppa_pig(t_map *map, t_game *game)
{
	game->map = map;
	game->mlx_ptr = mlx_init();
	if (game->mlx_ptr == NULL)
		return (-1);
	game->win.win_height = map->lines * 80;
	game->win.win_width = map->len * 80;
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->win.win_width, \
	game->win.win_height, \
	"PEPPA PIG LOVES YOU, FRIED CHICKEN AND BACON PARTY <3 !");
	if (game->win_ptr == NULL)
		return (-1);
	way_to_school(game);
	if (map->lines == 10 && map->len == 20)
		introduction_of_life_of_peppa_pig(game);
	else
		hunting_for_bacons(game);
	return (0);
}
