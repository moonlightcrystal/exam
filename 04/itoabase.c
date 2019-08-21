/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoabase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:19:24 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/20 17:10:20 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_count(int value, int base)
{
	int size;

	size = 0;
	if(value < 0 && base == 10)
		size++;
	while(value)
	{
		size++;
		value = value / base;
	}
	return(size);
}

char	*ft_itoa_base(int value, int base)
{
	int size;
	char *array;
	char *hex = "0123456789ABCDEF";
	long int number;

	number = value;
	if(base < 2 && base > 16)
		return(NULL);
	size = ft_count(value, base);
	if(!(array = (char*)malloc(sizeof(char) * size + 1)))
		return(NULL);
	array[size] = '\0';
	if(number < 0 && base == 10)
	{
		array[0] = '-';
		number *= -1;
	}
	if(number < 0)
		number *= -1;
	while(number)
	{
		array[--size] = hex[number % base];
		number /= base;
	}
	return(array);
}

int main()
{
	long int v = 2147483647;
	char *str = ft_itoa_base(v, 8);
	printf("%s", str);
	return(0);
}
