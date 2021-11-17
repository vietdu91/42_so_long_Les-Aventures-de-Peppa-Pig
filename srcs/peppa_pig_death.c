/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_death.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:08:28 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 15:29:03 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	head_of_peppa_on_the_table(t_game *game)
{
	game->intro_or_not = 3;
	mlx_key_hook(game->win_ptr, &peppa_use_her_feet, game);
	mlx_hook(game->win_ptr, 33, 131072, &suicide_of_peppa_pig, game);
	if (game->map->collect == 0 && game->map->super_peppa_sale == 1)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.game_over_2, 0, 0);
	else if (game->map->collect == 0 && game->map->super_peppa_sale == 0)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.game_over_3, 0, 0);
	else if (game->map->super_peppa_sale == 1)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.game_over_4, 0, 0);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->img.game_over_1, 0, 0);
	mlx_loop(game->mlx_ptr);
}

int	suicide_of_peppa_pig(t_game *game)
{
	destroy_pics(game);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
	free_yes_free(game->map);
	exit (EXIT_SUCCESS);
}

void	peppa_becomes_bacon(t_game *game)
{
	peppa_pig_the_delinquante();
	peppa_pig_satanique();
	peppa_pig_red_lucifer();
	peppa_pig_is_the_demon_of_minuit();
	peppa_pig_is_in_hell();
	if (game->map->lines == 10 && game->map->len == 20)
		head_of_peppa_on_the_table(game);
	suicide_of_peppa_pig(game);
}
