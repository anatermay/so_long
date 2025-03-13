/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   novel_foot_notes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:38:35 by aternero          #+#    #+#             */
/*   Updated: 2025/03/13 11:29:24 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

void	putstr_sl(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	map_length(t_map *map)
{
	int	len;

	len = 0;
	while (map && map->next)
	{
		len++;
		map = map->next;
	}
	return (len);
}

int	strlen_sl(char *str)
{
	int	length;

	length = 0;
	if (str[length] == '\0' || str[length] == '\n')
		return (-1);
	while (str[length] == '1' || str[length] == '0' || str[length] == 'P'
		|| str[length] == 'C' || str[length] == 'E')
		length++;
	return (length);
}

void	map_error(char *str, int ok, int main)
{
	if (ok != 1 && main != 1)
		putstr_sl("Please, provide a valid map\n\tERROR: ");
	putstr_sl(str);
	putstr_sl("\n\t\t\t\t\t\t\t\t\t\t\t\t. . . ");
	if (ok == 1)
		putstr_sl("OK");
	else
	{
		putstr_sl("KO\n\t\t\t\t\t\t\t\t\t\t\t\t. . . STOP");
		putstr_sl("\n\t\t\t\t\t\t\t\t\t\t\t\t. . . SORRY! '>.<");
		putstr_sl("\n\t\t\t\t\t\tYou can't play");
	}
	write(1, "\n", 1);
}
