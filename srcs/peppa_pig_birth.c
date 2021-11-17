/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peppa_pig_birth.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:49:15 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:43:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	back_to_birth_map(t_map *map)
{
	map->lines = 0;
	map->len = 0;
	map->pos_x = 0;
	map->pos_y = 0;
	map->wall = 0;
	map->space = 0;
	map->player = 0;
	map->pos_x_play = 0;
	map->pos_y_play = 0;
	map->eye_peppa = 0;
	map->super_peppa_sale = 0;
	map->eye_peppa = 0;
	map->eye_butcher = 0;
	map->exit = 0;
	map->collect = 0;
	map->enemy = 0;
}

void	back_to_birth_game(t_game *game)
{
	back_to_birth_img(game);
	game->mlx_ptr = NULL;
	game->win_ptr = NULL;
	game->moves = 0;
	game->intro_or_not = 0;
	game->img.pos_x = 0;
	game->img.pos_y = 0;
	game->img.img_width = 0;
	game->img.img_height = 0;
	game->win.win_width = 0;
	game->win.win_height = 0;
}

void	back_to_birth_img(t_game *game)
{
	game->img.background = NULL;
	game->img.bacon = NULL;
	game->img.buisson_l = NULL;
	game->img.buisson_d = NULL;
	game->img.butcher_l = NULL;
	game->img.butcher_d = NULL;
	game->img.george = NULL;
	game->img.smile_george = NULL;
	game->img.peppa_l = NULL;
	game->img.peppa_r = NULL;
	game->img.smile_l = NULL;
	game->img.smile_r = NULL;
	game->img.sky = NULL;
	game->img.cloud_a = NULL;
	game->img.cloud_b = NULL;
	game->img.sun = NULL;
	game->img.house = NULL;
	game->img.mud = NULL;
	game->img.pas_mud = NULL;
	game->img.peppa_mud_l = NULL;
	game->img.peppa_mud_d = NULL;
	game->img.peppa_sale_l = NULL;
	game->img.peppa_sale_d = NULL;
}

void	back_to_birth_transition(t_game *game)
{
	game->img.intro = NULL;
	game->img.credits = NULL;
	game->img.good_game = NULL;
	game->img.game_over_1 = NULL;
	game->img.game_over_2 = NULL;
	game->img.game_over_3 = NULL;
	game->img.game_over_4 = NULL;
}

void	peppa_pig_is_delivered(void)
{
	peppa_pig_is_dumm();
	peppa_pig_is_ugly();
	peppa_pig_is_a_future_bad_girl();
	peppa_pig_is_a_future_astronaut();
	peppa_pig_is_a_future_podologue();
	ft_putstr("#       #      #      #      #    #    #      # #   ", 1);
	ft_putstr(" #                  \033[0m               \033[36m|\n", 1);
	ft_putstr("|\033[1;35m             \033[44m                    # ", 1);
	ft_putstr("      ###### #      #      #    #    #      #  ####     ", 1);
	ft_putstr("              \033[0m               \033[36m|\n", 1);
	ft_putstr("|             \033[44m                               ", 1);
	ft_putstr("                                               ", 1);
	ft_putstr("              \033[0m\033[36m               |\n", 1);
	ft_putstr("|                                           ", 1);
	ft_putstr("                                            ", 1);
	ft_putstr("                                 |\n", 1);
	ft_putstr("|                                           ", 1);
	ft_putstr("                                            ", 1);
	ft_putstr("                                 |\n", 1);
	ft_putstr("|                                           ", 1);
	ft_putstr("                                            ", 1);
	ft_putstr("                                 |\n", 1);
}
