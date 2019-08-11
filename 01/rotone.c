/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:46:37 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/01 17:56:19 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		while(*argv[1])
		{
			if((*argv[1] >= 'A' && *argv[1] <= 'Y') || (*argv[1] >= 'a' && *argv[1] <= 'y'))
			{
				*argv[1] += 1;
				write(1, argv[1]++, 1);
			}
			else if(*argv[1] == 'Z' || *argv[1] == 'z')
			{
				*argv[1] -= 25;
				write(1, argv[1]++, 1);
			}
			else
				write(1, argv[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}