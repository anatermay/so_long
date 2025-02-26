/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   worldbuilding.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:52:25 by aternero          #+#    #+#             */
/*   Updated: 2025/02/20 21:35:31 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_file/so_long.h"

int	validate_map(char *read, int length)
{
	if (str_length(read) <= 0 || read[0] == '\n')
	{
		putstr("ERROR: Empty Line.");
		free(read);
		exit(ERROR);
	}
	if (str_lenght(read) != length)
	{
		putstr("Error: Map is not a rectangle.");
		free(read);
		exit(ERROR);
	}
}

char	**load_map(char *argv)
{
	char	**read;
	int		fd;
	int		index;
	int		length;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		ft_printf("ERROR: Map file not open");
		return (NULL);
	}
	index = 0;
	read[index] = get_next_line(fd);
	length = str_lenght(read[index]);
	while (read != NULL)
	{
		index++;
		read = get_next_line(fd);
		if (validate_map(read[index], length) == ERROR)
			return (ERROR);
	}
	close(fd);
	return (read);
}

int	map_extension(char *argv)
{
	int	index;

	index = 0;
	while (argv[index] != '\0')
	{
		if (argv[index] == '.')
		{
			if (argv[index + 1] == 'b' && argv[index + 2] == 'e'
				&& argv[index + 3] == 'r' && argv[index + 4] == '\0')
				return (SUCCESS);
		}
		index++;
	}
	return (FAILURE);
}

/* 
int	main(int argc, char **argv)
{
	printf("NAME: %s\n", argv[1]);
	printf("LENGTH: %d\n", str_lenght(argv[1]));
	if (argc == 2)
	{
		if (map_extension(argv[1]) == SUCCESS)
			printf("OK, map exist and it's .ber!\n");
		else
			printf("KO\nError: Map exist with other extension :(\n");
	}
	else
		printf("KO\nERROR: To many files or map doesn't exist");
	return (0);
}

EN:	
ES:	Carga y valida el mapa desde un archivo .ber,
	verifica su estructura y contenido.
*/