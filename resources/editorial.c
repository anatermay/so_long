/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:53:42 by aternero          #+#    #+#             */
/*   Updated: 2025/02/20 21:39:10 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

void	err_argv(void)
{
	ft_printf("Usage: ./so_long [map.ber]\n\n");
	ft_printf("Please provide a valid map file\n");
	ft_printf("\tIt's necessary a map with '.ber' extension as an argument.\n");
}

/*
EN:	
ES:	Manejo de errores y mensajes en consola.
*/