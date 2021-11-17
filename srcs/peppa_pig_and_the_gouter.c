/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_and_the_gouter.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:21:27 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 15:29:28 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	peppa_good_job(t_game *game)
{
	game->intro_or_not = 3;
	mlx_key_hook(game->win_ptr, &peppa_use_her_feet, game);
	mlx_hook(game->win_ptr, 33, 131072, &suicide_of_peppa_pig, game);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.good_game, 0, 0);
	mlx_loop(game->mlx_ptr);
}

void	peppa_fucks_and_loves_bacon(t_game *game)
{
	peppa_pig_plays_with_friends();
	peppa_pig_plays_football();
	peppa_pig_plays_a_la_montagne();
	peppa_pig_plays_mikado();
	peppa_pig_plays_ps4();
	if (game->map->lines == 10 && game->map->len == 20)
		peppa_good_job(game);
	suicide_of_peppa_pig(game);
}
