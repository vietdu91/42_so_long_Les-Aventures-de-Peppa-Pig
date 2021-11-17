/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   way_to_school.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:34:33 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:47:17 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	way_to_school(t_game *game)
{
	way_to_background(game);
	way_to_people(game);
	way_to_mirror_self(game);
	way_to_screen(game);
	way_to_sky(game);
	way_to_suicide(game);
	way_to_blood(game);
}

void	way_to_background(t_game *game)
{
	game->img.background = mlx_xpm_file_to_image(game->mlx_ptr, BACKGROUND, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.background)
		suicide_of_peppa_pig(game);
	game->img.buisson_l = mlx_xpm_file_to_image(game->mlx_ptr, BUISSON_L, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.buisson_l)
		suicide_of_peppa_pig(game);
	game->img.buisson_d = mlx_xpm_file_to_image(game->mlx_ptr, BUISSON_R, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.buisson_d)
		suicide_of_peppa_pig(game);
	game->img.mud = mlx_xpm_file_to_image(game->mlx_ptr, MUD, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.mud)
		suicide_of_peppa_pig(game);
	game->img.pas_mud = mlx_xpm_file_to_image(game->mlx_ptr, PAS_MUD, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.pas_mud)
		suicide_of_peppa_pig(game);
}

void	way_to_people(t_game *game)
{
	game->img.bacon = mlx_xpm_file_to_image(game->mlx_ptr, BACON, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.bacon)
		suicide_of_peppa_pig(game);
	game->img.george = mlx_xpm_file_to_image(game->mlx_ptr, GEORGE, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.george)
		suicide_of_peppa_pig(game);
	game->img.smile_george = mlx_xpm_file_to_image(game->mlx_ptr, SMILE_GEORGE, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.smile_george)
		suicide_of_peppa_pig(game);
	game->img.smile_l = mlx_xpm_file_to_image(game->mlx_ptr, SMILE_L, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.smile_l)
		suicide_of_peppa_pig(game);
	game->img.smile_r = mlx_xpm_file_to_image(game->mlx_ptr, SMILE_R, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.smile_r)
		suicide_of_peppa_pig(game);
}

void	way_to_mirror_self(t_game *game)
{
	game->img.peppa_l = mlx_xpm_file_to_image(game->mlx_ptr, PEPPA_L, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.peppa_l)
		suicide_of_peppa_pig(game);
	game->img.peppa_r = mlx_xpm_file_to_image(game->mlx_ptr, PEPPA_R, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.peppa_r)
		suicide_of_peppa_pig(game);
	game->img.peppa_mud_l = mlx_xpm_file_to_image(game->mlx_ptr, PEPPA_MUD_L, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.peppa_mud_l)
		suicide_of_peppa_pig(game);
	game->img.peppa_mud_d = mlx_xpm_file_to_image(game->mlx_ptr, PEPPA_MUD_D, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.peppa_mud_d)
		suicide_of_peppa_pig(game);
}

void	way_to_screen(t_game *game)
{
	game->img.intro = mlx_xpm_file_to_image(game->mlx_ptr, INTRO, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.intro)
		suicide_of_peppa_pig(game);
	game->img.credits = mlx_xpm_file_to_image(game->mlx_ptr, CREDITS, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.credits)
		suicide_of_peppa_pig(game);
	game->img.good_game = mlx_xpm_file_to_image(game->mlx_ptr, GOOD_GAME, \
	&game->img.img_width, &game->img.img_height);
	if (!game->img.good_game)
		suicide_of_peppa_pig(game);
}
