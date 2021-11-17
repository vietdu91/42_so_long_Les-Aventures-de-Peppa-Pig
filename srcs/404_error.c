/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   404_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:50:46 by emtran            #+#    #+#             */
/*   Updated: 2021/11/16 18:00:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_free_your_mum(t_map *map, int a)
{
	(void) a;
	if (!map || (a >= 1 && a <= 3))
		exit(EXIT_FAILURE);
	if (map->mappy)
		free_yes_free(map);
	exit(EXIT_FAILURE);
}

void	carrefour_of_path(int a, t_map *map)
{
	if (a == 1)
		ft_putstr(ERR_PATH, 2);
	if (a == 2)
		ft_putstr(ERR_FILE, 2);
	if (a == 3)
		ft_putstr(ERR_DIR, 2);
	if (a == 4)
		ft_putstr(ERR_WALL, 2);
	if (a == 5)
		ft_putstr(ERR_MANY_LEN, 2);
	if (a == 6)
		ft_putstr(ERR_MANY_LINES, 2);
	if (a == 7)
		ft_putstr(ERR_CHAR, 2);
	if (a == 8)
		ft_putstr(ERR_NO_C, 2);
	if (a == 9)
		ft_putstr(ERR_NO_E, 2);
	if (a == 10)
		ft_putstr(ERR_NO_P, 2);
	if (a == 11)
		ft_putstr(ERR_LEN, 2);
	ft_free_your_mum(map, a);
}

void	check_error_arg(int argc)
{
	if (argc < 2)
	{
		ft_putstr(ERR_MSG, 2);
		ft_putstr(ERR_L_ARG, 2);
	}
	else
	{
		ft_putstr(ERR_MSG, 2);
		ft_putstr(ERR_H_ARG, 2);
	}
	exit(EXIT_FAILURE);
}
