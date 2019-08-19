/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:55:34 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/19 18:25:25 by kcorie           ###   ########.fr       */
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
	int minus;
	char *hex = "0123456789ABCDEF";
	int x;

	size = ft_count(value, base);
	if(!(array = (char *)malloc(sizeof(char) * size + 1)))
	   return(NULL);
	array[size] = '\0';
	if(value < 0 && base == 10)
	{
		array[0] = '-';
		minus *= -1;
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
	int v = 214789639;
	printf("%s", ft_itoa_base(v, 16));
	return(0);
}
