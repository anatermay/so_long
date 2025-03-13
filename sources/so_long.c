/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 19:51:06 by aternero          #+#    #+#             */
/*   Updated: 2025/03/12 20:31:20 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (map_validator(argv[1]) == FALSE)
			return (FALSE);
		//mlx_game_init(argv[1]);
	}
	else
		map_error("Introduce the correct number of arguments", 0, 1);
	return (0);
}
