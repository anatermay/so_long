/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   worldbuilding_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:05:33 by aternero          #+#    #+#             */
/*   Updated: 2025/02/20 21:32:53 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

int	basic_elements(char **read, int size)
{
	int	elements[3];
	int	index[2];

	elements[0] = 0;
	elements[1] = 0;
	elements[2] = 0;
	index[0] = 1;
	while (read[index[0]] && index[0] < size)
	{
		index[1] = 0;
		while (read[index[0]][index[1]])
		{
			if (read[index[0]][index[1]] == 'C')
				elements[0]++;
			if (read[index[0]][index[1]] == 'E')
				elements[1]++;
			if (read[index[0]][index[1]] == 'P')
				elements[2]++;
			index[1]++;
		}
		index[0]++;
	}
	if (elements[0] <= 0 || elements[1] != 1 || elements[2] != 1)
		return (ERROR);
	return (SUCCESS);
}

int	enought_walls(char *read)
{
	int	index;

	index = 0;
	while (read[index])
	{
		if (read[index] != 1)
		{
			ft_printf("The map is not closed with walls");
			return (ERROR);
		}
		index++;
	}
	return (SUCCESS);
}

int	validate_ber_content(char **read)
{
	int	index_x;
	int	index_y;
	int	size;

	size = 0;
	while (read[size])
		size++;
	if (enought_walls(read[0]) == ERROR || enought_walls(read[size]) == ERROR
		|| basic_elements(read, size) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
