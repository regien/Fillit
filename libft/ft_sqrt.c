/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:33:38 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/30 17:35:09 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				square_root(int d)
{
	int i;

	i = 2;
	while ((i * i) < d)
		i++;
	return (i);
}