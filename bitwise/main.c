/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 18:18:27 by gmalpart          #+#    #+#             */
/*   Updated: 2017/11/03 19:44:39 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
		unsigned int a = 60;	/* 60 = 0011 1100 */  
		unsigned int b = 13;	/* 13 = 0000 1101 */
		int c = 0;           

		c = a & b;       /* 12 = 0000 1100 */ 
		printf("Line 1 - Value of c is %d\n", c );

		c = a | b;       /* 61 = 0011 1101 */
		printf("Line 2 - Value of c is %d\n", c );

		c = a ^ b;       /* 49 = 0011 0001 */
		printf("Line 3 - Value of c is %d\n", c );

		c = ~a;          /*-61 = 1100 0011 */
		printf("Line 4 - Value of c is %d\n", c );

		c = a << 2;     /* 240 = 1111 0000 */
		printf("Line 5 - Value of c is %d\n", c );

		c = a >> 2;     /* 15 = 0000 1111 */
		printf("Line 6 - Value of c is %d\n", c );
}
