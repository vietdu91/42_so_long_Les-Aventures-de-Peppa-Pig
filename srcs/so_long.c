/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:29:36 by emtran            #+#    #+#             */
/*   Updated: 2021/11/12 10:49:04 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	inspection_douaniere_of_map(char **argv, t_map *map)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		carrefour_of_path(2, map);
	}
	read_between_the_lines(map, fd, argv);
	first_walls_first(map);
	between_walls_between(map);
	last_walls_last(map);
}

void	the_card_of_treasure(char **argv, t_map *map, t_game *game)
{
	is_there_a_cute_ber_here(argv[1], map);
	back_to_birth_map(map);
	back_to_birth_game(game);
	if (open(argv[1], O_DIRECTORY) != -1)
		carrefour_of_path(3, map);
}

int	main(int argc, char **argv)
{
	t_map	map[1];
	t_game	game[1];

	if (argc == 2)
	{
		the_card_of_treasure(argv, map, game);
		inspection_douaniere_of_map(argv, map);
		peppa_pig_is_delivered();
		if (birth_of_peppa_pig(map, game) == -1)
			carrefour_of_path(0, map);
		free_yes_free(map);
	}
	else
		check_error_arg(argc);
	return (0);
}
