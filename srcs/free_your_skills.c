/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_your_skills.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:22:39 by emtran            #+#    #+#             */
/*   Updated: 2021/11/16 18:43:46 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	free_yes_free(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->lines)
	{
		free(map->mappy[i]);
		i++;
	}
	free(map->mappy);
}

void	destroy_peppa_and_family(t_game *game)
{
	if (game->img.george)
		mlx_destroy_image(game->mlx_ptr, game->img.george);
	if (game->img.smile_george)
		mlx_destroy_image(game->mlx_ptr, game->img.smile_george);
	if (game->img.peppa_l)
		mlx_destroy_image(game->mlx_ptr, game->img.peppa_l);
	if (game->img.peppa_r)
		mlx_destroy_image(game->mlx_ptr, game->img.peppa_r);
	if (game->img.smile_l)
		mlx_destroy_image(game->mlx_ptr, game->img.smile_l);
	if (game->img.smile_r)
		mlx_destroy_image(game->mlx_ptr, game->img.smile_r);
	if (game->img.peppa_mud_l)
		mlx_destroy_image(game->mlx_ptr, game->img.peppa_mud_l);
	if (game->img.peppa_mud_d)
		mlx_destroy_image(game->mlx_ptr, game->img.peppa_mud_d);
	if (game->img.peppa_sale_l)
		mlx_destroy_image(game->mlx_ptr, game->img.peppa_sale_l);
	if (game->img.peppa_sale_d)
		mlx_destroy_image(game->mlx_ptr, game->img.peppa_sale_d);
	if (game->img.butcher_l)
		mlx_destroy_image(game->mlx_ptr, game->img.butcher_l);
	if (game->img.butcher_d)
		mlx_destroy_image(game->mlx_ptr, game->img.butcher_d);
}

void	destroy_your_life(t_game *game)
{
	if (game->img.intro)
		mlx_destroy_image(game->mlx_ptr, game->img.intro);
	if (game->img.credits)
		mlx_destroy_image(game->mlx_ptr, game->img.credits);
	if (game->img.game_over_1)
		mlx_destroy_image(game->mlx_ptr, game->img.game_over_1);
	if (game->img.game_over_2)
		mlx_destroy_image(game->mlx_ptr, game->img.game_over_2);
	if (game->img.game_over_3)
		mlx_destroy_image(game->mlx_ptr, game->img.game_over_3);
	if (game->img.game_over_4)
		mlx_destroy_image(game->mlx_ptr, game->img.game_over_4);
	if (game->img.good_game)
		mlx_destroy_image(game->mlx_ptr, game->img.good_game);
}

void	destroy_pics(t_game *game)
{
	destroy_peppa_and_family(game);
	destroy_your_life(game);
	if (game->img.background)
		mlx_destroy_image(game->mlx_ptr, game->img.background);
	if (game->img.bacon)
		mlx_destroy_image(game->mlx_ptr, game->img.bacon);
	if (game->img.buisson_l)
		mlx_destroy_image(game->mlx_ptr, game->img.buisson_l);
	if (game->img.buisson_d)
		mlx_destroy_image(game->mlx_ptr, game->img.buisson_d);
	if (game->img.sky)
		mlx_destroy_image(game->mlx_ptr, game->img.sky);
	if (game->img.cloud_a)
		mlx_destroy_image(game->mlx_ptr, game->img.cloud_a);
	if (game->img.cloud_b)
		mlx_destroy_image(game->mlx_ptr, game->img.cloud_b);
	if (game->img.sun)
		mlx_destroy_image(game->mlx_ptr, game->img.sun);
	if (game->img.house)
		mlx_destroy_image(game->mlx_ptr, game->img.house);
	if (game->img.mud)
		mlx_destroy_image(game->mlx_ptr, game->img.mud);
	if (game->img.pas_mud)
		mlx_destroy_image(game->mlx_ptr, game->img.pas_mud);
}
