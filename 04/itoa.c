/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:19:53 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/17 17:08:37 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int fcount(int n)
{
	int size;

	size = 0;
	if(n <= 0)
		size += 1;
	while(n)
	{
		size++;
		n = n / 10;
	}
	return(size);
}

char *ft_itoa(int nbr)
{
	int minus;
	char *array;
	int size;

	minus = 1;
	size = fcount(nbr);
	if(!(array = (char *)malloc(sizeof(char) * (size + 1))))
		return(NULL);
	array[size] = '\0';
	if(nbr == 0)
		array[0] = '0';
	if(nbr < 0)
	{
		array[0] = '-';
		minus *= -1;
	}
	while(nbr != 0)
	{
		array[--size] = nbr % 10 * minus + '0';
		nbr = nbr / 10;
	}
	return(array);
}

int main()
{
	int a = -4356456;
	printf("%s", ft_itoa(a));
	return(0);
}
