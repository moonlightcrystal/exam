/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 22:47:13 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/28 23:15:44 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int counter(char c)
{
	int g;

	g = 1;
	if(c >= 'A' && c <= 'Z')
		g = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		g = c -'a' + 1;
	return (g);
}

int		main(int argc, char **argv)
{
	int rep;

	rep = 0;
	if(argc == 2)
	{
		while(*argv[1] != '\0')
		{
			rep = counter(*argv[1]);
			while(rep--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
