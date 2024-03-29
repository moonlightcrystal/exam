/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:55:34 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/20 14:12:23 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int ft_count(int num, int base)
{
	int nub;

	nub = 0;
	if(num < 0 && base == 10)
		nub = nub +  1;
	while(num)
	{
		nub++;
		num = num / base;
	}
	return(nub);
}

char	*ft_itoa_base(int value, int base)
{
	char *array;
	int size;
	char *hex = "0123456789ABCDEF";

	size = ft_count(value, base);
	if(!(array = (char *)malloc(sizeof(char) * size + 1)))
	   return(NULL);
	array[size] = '\0';
	if(value < 0 && base == 10)
	{
		array[0] = '-';
		value *= -1;
	}
	if(value < 0)
		value *= -1;
	while(value)
	{
		array[--size] = hex[value % base];
		value /= base;
	}
	return(array);
}

int main()
{
	int v = 9;
	printf("%s", ft_itoa_base(v, 4));
	return(0);
}
