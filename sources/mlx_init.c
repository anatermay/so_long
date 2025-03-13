/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:32:06 by aternero          #+#    #+#             */
/*   Updated: 2025/03/13 11:30:36 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

/* void	mlx_game_init(char *argv)
{
	t_game	*game;
	t_point	point;

	game = game_initialize(argv);
	if (!game)
		return ;
	game->player->point = find_the_player(game->map);
	point = game->player->point;
	game->mlx = mlx_init(point.x * 64, point.y * 64, "so_long", TRUE);
	if (!game || !game->mlx)
	{
		map_error("MLX42 initialization has failed.", 0, 0);
		free_game(game);
		exit (FALSE);
	}
	free_game(game);
} */
