/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jatoi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:24:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/17 18:44:29 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int ft_count(int n)
{
	int i;

	i = 0;
	if(n <= 0)
		i += 1;
	while(n)
	{
		i++;
		n = n / 10;
	}
	return(i);
}
char	*ft_itoa(int nbr)
{
	int minus;
	char *array;
	int size;

	minus = 1;
	size = ft_count(nbr);
	if(!(array = (char*)malloc(sizeof(char) * (size + 1))))
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
		nbr /= 10;
	}
	return(array);
}

int main()
{
	int nbr = -78945;
	printf("%s", ft_itoa(nbr));
	return(0);
}
