/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_mappy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:33:09 by emtran            #+#    #+#             */
/*   Updated: 2021/11/09 18:38:47 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_tabcalloc(size_t size, t_map *map)
{
	size_t	i;

	map->mappy = ((char **)malloc(sizeof(char *) * (size + 1)));
	if (!map->mappy)
		ft_free_your_mum(map, 0);
	i = 0;
	while (i < size)
	{
		map->mappy[i] = 0;
		i++;
	}
}

void	read_between_the_lines(t_map *map, int fd, char **argv)
{
	int		ret;
	char	*line;

	ret = 1;
	line = NULL;
	while (ret > 0)
	{
		ret = get_next_line(fd, &line, map);
		free(line);
		map->lines++;
	}
	close(fd);
	if (map->lines > (1080 / 80))
		carrefour_of_path(6, map);
	print_mappy_for_happy(map, fd, argv);
}

void	print_mappy_for_happy(t_map *map, int fd, char **argv)
{
	int		a;
	char	*line;

	a = 0;
	line = NULL;
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		carrefour_of_path(2, map);
	}
	ft_tabcalloc(map->lines, map);
	if (!map->mappy)
		ft_free_your_mum(map, 0);
	while (a < map->lines)
	{
		get_next_line(fd, &line, map);
		map->mappy[a] = ft_pushinyourline(line, map);
		free(line);
		a++;
	}
	close(fd);
}

int	check_your_body(char c)
{
	if (c == '0' || c == '1' || c == 'C' || c == '\n'
		|| c == 'E' || c == 'P' || c == 'A' || c == 'B')
		return (0);
	return (1);
}
