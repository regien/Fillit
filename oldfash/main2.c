/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:45:44 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/09 23:16:13 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

const char example[] = "uso:/example fil1\n";

int main(int argc, char **argv)
{
	int		fd;
//	int		ret;
	char	***storage;
//	char	buf[21];


	if (argc != 2)
	{
		ft_putstr(example);
		return(0);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
//		if((ret = read(fd, buf, 21)) > 0 )
//		{
//			buf[ret] = '\0';
//			ft_putstr(buf);
//		}
		close(fd);
	}
	return (0);
}

void	load_file(int fd, char ***storage)
{
	int		ret;
	char	buf[21];
	
	while ((ret = read(fd, buf, 21) > 0))
	{
		if((check_tetra(buf)) == 1)
			return;
		else
		
	}
}

int		check_tetra(char *str)
{
	int i;
	int contador;
	int nwline;

	nwline = 4
	contador = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] == '#')
			contador++;
		if (str[i] == '\n' && i = nwline)
		{
			nwline = nwline + 5;
			i++;
		}
		if (contador >= 5 || str[i] != '.' || str[i] != '#')
			return (1);
		i++;
		if (i == 20 && str[i] == '\0')
			i++;
	}
}

//void	load_shapes (t_list , int fd)


/*
char		***holder
(holder = malloc(sizeof(char**) * count)
*/
