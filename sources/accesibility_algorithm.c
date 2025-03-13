/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accesibility_algorithm.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:58:15 by aternero          #+#    #+#             */
/*   Updated: 2025/03/13 11:43:14 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

int	recalculate_total_number(char **map, char c)
{
	int	count;
	int	index;
	int	yndex;

	count = 0;
	yndex = 0;
	while (map[yndex])
	{
		index = 0;
		while (map[yndex][index])
		{
			if (map[yndex][index] == c)
				count++;
			index++;
		}
		yndex++;
	}
	return (count);
}

int	is_all_filled(char **map)
{
	if (recalculate_total_number(map, 'C') == 0
		&& recalculate_total_number(map, 'E') == 0)
	{
		map_error("All elements are accesible.", 1, 0);
		return (TRUE);
	}
	map_error("Not all elements are accesible.", 0, 0);
	return (FALSE);
}

char	**fill_check(char **map, t_point table, t_point init)
{
	if (init.x < 0 || init.x >= table.x || init.y < 0 || init.y >= table.y
		|| map[init.y][init.x] == '1' || map[init.y][init.x] == 'D')
		return (map);
	map[init.y][init.x] = 'D';
	map = fill_check(map, table, (t_point){init.x - 1, init.y});
	map = fill_check(map, table, (t_point){init.x + 1, init.y});
	map = fill_check(map, table, (t_point){init.x, init.y - 1});
	map = fill_check(map, table, (t_point){init.x, init.y + 1});
	return (map);
}

t_point	player_init_position(char **map)
{
	t_point	point;

	point.y = 0;
	while (map[point.y])
	{
		point.x = 0;
		while (map[point.y][point.x])
		{
			if (map[point.y][point.x] == 'P')
				return (point);
			point.x++;
		}
		point.y++;
	}
	return (point);
}

int	flood_fill_check(char **map)
{
	t_point	player;
	t_point	size;

	player = player_init_position(map);
	size.x = ft_strlen(map[0]);
	size.y = 0;
	while (map[size.y])
		size.y++;
	map = fill_check(map, size, player);
	if (is_all_filled(map) == FALSE)
		return (FALSE);
	return (TRUE);
}
