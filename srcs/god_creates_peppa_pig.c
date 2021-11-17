/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   god_creates_peppa_pig.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:05:00 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:32:26 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	thank_you_my_friends(t_game *game)
{
	game->intro_or_not = 2;
	mlx_key_hook(game->win_ptr, &peppa_use_her_feet, game);
	mlx_hook(game->win_ptr, 33, 131072, &suicide_of_peppa_pig, game);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.credits, 0, 0);
	mlx_loop(game->mlx_ptr);
}

void	introduction_of_life_of_peppa_pig(t_game *game)
{
	game->intro_or_not = 1;
	mlx_key_hook(game->win_ptr, &peppa_use_her_feet, game);
	mlx_hook(game->win_ptr, 33, 131072, &suicide_of_peppa_pig, game);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->img.intro, 0, 0);
	mlx_loop(game->mlx_ptr);
}
