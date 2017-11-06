/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 19:23:13 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/05 19:59:10 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
			read(fd, buf, 21);
			ft_putstr(buf);
			close(fd);
		}
	}
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
