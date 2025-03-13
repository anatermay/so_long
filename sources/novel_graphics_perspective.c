/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   novel_graphics_perspective.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:37:41 by aternero          #+#    #+#             */
/*   Updated: 2025/03/13 11:29:27 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

t_point	find_the_player(t_map *map)
{
	t_point	point;

	point.y = 0;
	while (map)
	{
		point.x = 0;
		while (map->ber[point.x])
		{
			if (map->ber[point.x] == 'P')
				return (point);
			point.x++;
		}
		point.y++;
		map = map->next;
	}
	return (point);
}
