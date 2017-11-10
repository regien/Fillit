/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 19:23:13 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/06 15:38:39 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

/*
	static void print_usage(char *name)
	{
	ft_putstr("usage: ");
	ft_putstr(name);
	ft_putendl(" file");
	return ;
	}
	*/

int		main (int argc, char **argv)
{
	int		fd;
	char	buf[21];
	int		ret;

	if (argc == 2)
	{
		// haz la mierda de fillit
		if ((fd = open(argv[1], O_RDONLY) < 0))
		{
			ft_putendl("Error");
			return(0);
		}
		else
		{
			ft_putstr("leyendo");
			if ((ret = read(fd, buf, 21)) > 0)
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
			ft_putstr("cerrando");
			close(fd);
			ft_putstr(buf);
			return (0);
		}
		return (0);
		/*	else
			print_usage(argv[0]);
			return (0);
			*/
		/*
			if (argc != 2)
			{
			ft_putstr("usage:\"fillit validfile.txt\n\"");
			}
			fd = open(argv[1], O_RDONLY);
			while ( )
			*/
	}
}
