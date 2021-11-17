/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mappy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:09:29 by emtran            #+#    #+#             */
/*   Updated: 2021/11/07 18:23:34 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	is_there_a_cute_ber_here(char *str, t_map *map)
{
	int		a;
	int		b;
	char	*path;

	a = 0;
	b = 0;
	path = BER;
	while (str[a] && str[a] != '.')
		a++;
	if (!str[a])
		carrefour_of_path(1, map);
	while (str[a + b] && path[b])
	{
		if (str[a + b] == path[b])
			b++;
		else
			carrefour_of_path(1, map);
	}
	if (b == 4 && str[a + b] == '\0' && path[b] == '\0')
		return ;
	carrefour_of_path(1, map);
}

void	first_walls_first(t_map *map)
{
	int	a;

	a = 0;
	map->len = ft_strlen(map->mappy[0]);
	if (map->len > (1920 / 60))
		carrefour_of_path(5, map);
	while (a < map->len)
	{
		if (map->mappy[0][a] != '1')
			carrefour_of_path(4, map);
		a++;
	}
}

void	last_walls_last(t_map *map)
{
	int	a;

	a = 0;
	while (a < map->len)
	{
		if (map->mappy[map->lines - 1][a] != '1')
			carrefour_of_path(4, map);
		a++;
	}
}

void	check_objects(int power_switch, int a, int b, t_map *map)
{
	if (power_switch == 0)
	{
		if (map->mappy[a][b] == 'C')
			map->collect++;
		if (map->mappy[a][b] == 'E')
			map->exit++;
		if (map->mappy[a][b] == 'P')
		{
			map->pos_x_play = b;
			map->pos_y_play = a;
			map->player++;
		}
		if (map->mappy[a][b] == 'A')
			map->enemy++;
	}
	if (power_switch == 1)
	{
		if (map->collect < 1)
			carrefour_of_path(8, map);
		if (map->exit < 1)
			carrefour_of_path(9, map);
		if (map->player != 1)
			carrefour_of_path(10, map);
	}
}

void	between_walls_between(t_map *map)
{
	int	a;
	int	b;
	int	len;

	a = 1;
	while (a < map->lines)
	{	
		len = ft_strlen(map->mappy[a]);
		if (len != map->len)
			carrefour_of_path(11, map);
		b = 0;
		while (b < map->len)
		{
			if (map->mappy[a][0] != '1' || map->mappy[a][map->len - 1] != '1')
				carrefour_of_path(4, map);
			if (check_your_body(map->mappy[a][b]) == 1)
				carrefour_of_path(7, map);
			check_objects(0, a, b, map);
			b++;
		}
		a++;
	}
	check_objects(1, a, b, map);
}
