/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   way_to_butcher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:29:55 by emtran            #+#    #+#             */
/*   Updated: 2021/11/16 18:45:16 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	way_to_suicide(t_game *game)
{
	game->img.game_over_1 = mlx_xpm_file_to_image(game->mlx_ptr, GAME_OVER_1, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.game_over_1)
		suicide_of_peppa_pig(game);
	game->img.game_over_2 = mlx_xpm_file_to_image(game->mlx_ptr, GAME_OVER_2, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.game_over_2)
		suicide_of_peppa_pig(game);
	game->img.game_over_3 = mlx_xpm_file_to_image(game->mlx_ptr, GAME_OVER_3, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.game_over_3)
		suicide_of_peppa_pig(game);
	game->img.game_over_4 = mlx_xpm_file_to_image(game->mlx_ptr, GAME_OVER_4, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.game_over_4)
		suicide_of_peppa_pig(game);
}

void	way_to_blood(t_game *game)
{
	game->img.butcher_l = mlx_xpm_file_to_image(game->mlx_ptr, BUTCHER_L, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.butcher_l)
		suicide_of_peppa_pig(game);
	game->img.butcher_d = mlx_xpm_file_to_image(game->mlx_ptr, BUTCHER_R, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.butcher_d)
		suicide_of_peppa_pig(game);
	game->img.peppa_sale_l = mlx_xpm_file_to_image(game->mlx_ptr, PEPPA_SALE_L, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.peppa_sale_l)
		suicide_of_peppa_pig(game);
	game->img.peppa_sale_d = mlx_xpm_file_to_image(game->mlx_ptr, PEPPA_SALE_D, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.peppa_sale_d)
		suicide_of_peppa_pig(game);
}

void	way_to_sky(t_game *game)
{
	game->img.sky = mlx_xpm_file_to_image(game->mlx_ptr, SKY, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.sky)
		suicide_of_peppa_pig(game);
	game->img.cloud_a = mlx_xpm_file_to_image(game->mlx_ptr, CLOUD_A, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.cloud_a)
		suicide_of_peppa_pig(game);
	game->img.cloud_b = mlx_xpm_file_to_image(game->mlx_ptr, CLOUD_B, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.cloud_b)
		suicide_of_peppa_pig(game);
	game->img.sun = mlx_xpm_file_to_image(game->mlx_ptr, SUN, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.sun)
		suicide_of_peppa_pig(game);
	game->img.house = mlx_xpm_file_to_image(game->mlx_ptr, HOUSE, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.house)
		suicide_of_peppa_pig(game);
}
