/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:01:09 by aternero          #+#    #+#             */
/*   Updated: 2025/02/20 21:34:58 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/so_long.h"

int	main(int argc, char **argv)
{
	char	**map;

	if (argc == 2 && map_extension(argv[1]) == SUCCESS)
	{
		if (load_map(argv[1]) == ERROR
			|| validate_ber_content(load_map(argv[1]) == ERROR))
			return (ERROR);
		map = load_map(argv[1]);
	}
	else
	{
		err_argv();
		return (ERROR);
	}
	game_goal();
	return (SUCCESS);
}

/*Este es el archivo principal del juego, responsable de la ejecución
	y control global del flujo del programa. Es el punto de entrada donde
	se inicia el juego.*/