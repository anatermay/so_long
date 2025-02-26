/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:50:42 by aternero          #+#    #+#             */
/*   Updated: 2025/02/20 19:32:08 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include "../resources/libft/libft.h"
# include "../resources/gnl/get_next_line.h"
# include "../resources/ft_printf/ft_printf.h"

// *** Structures. ***

typedef struct s_world
{
	char	*region;
	t_world	*next;
}	t_world;

typedef struct s_play
{
	t_world	*world;
	char	*ber;
}	t_play;

// *** Return values. ***

# define ERROR -1       // Error return value. Used for error handling.
# define FAILURE 1      // Failure return value. Used for error handling.
# define SUCCESS 0      // Success... 0 is the default return value.

// ** Functions. ***

int	str_lenght(char *str);

#endif
/*
EN:	
ES:	Contiene las estructuras, macros, includes y prototipos de funciones.
*/