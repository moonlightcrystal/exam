/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:17:19 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/13 21:17:57 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

	int x; 
	int y; 
	int klm;
	int easy;

	if(argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		while(x != y)
		{
			if(x < y)
			{
				klm = x;
				y = y - klm;
			}
			else
			{
				easy = y;
				x = x - easy;
			}
		}
		printf("%d\n", y);
	}
	return(0);
}
