/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   novel_editorial.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:30:34 by aternero          #+#    #+#             */
/*   Updated: 2025/03/13 11:29:21 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

void	free_game(t_game *game)
{
	t_game	*lst;

	lst = game;
	if (!lst)
		return ;
	free_map(lst->map);
	free(lst);
}

void	free_map(t_map *map)
{
	t_map	*stack;
	t_map	*auxiliar;

	stack = map;
	if (!stack)
		return ;
	while (stack)
	{
		auxiliar = stack->next;
		if (stack->ber)
			free(stack->ber);
		free(stack);
		stack = auxiliar;
	}
}
