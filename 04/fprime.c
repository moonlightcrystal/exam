/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:57:23 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/19 16:10:03 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


void frpime(int n)
{
	int i;

	i = 2;
	if(n == 1)
		printf("%d", n);
	else
	{
		while(n > 1)
		{
			if(n % i == 0)
			{
				printf("%d", i);
				n = n / i;
				if(n > 1)
					printf("*");
				i--;
			}
			i++;
		}
	}
}


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		frpime(atoi(argv[1]));
	}
	printf("\n");
}
