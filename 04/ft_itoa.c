/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 20:45:26 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/16 21:13:06 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

static int ft_count(int n)
{
	int len;

	len = 0;
	if(n <= 0)
		len += 1;
	while(n)
	{
		len++;
		n /= 10;
	}
	return(len);
}

char	*ft_itoa(int nbr)
{
	char *array;
	int size;
	int neg;

	neg = 1;
	size = ft_count(nbr);
	if(!(array = (char *)malloc(sizeof(char) * (size + 1))))
		return(NULL);
	array[size]= '\0';
	if(!array)
		return(NULL);
	if(nbr < 0)
	{
		array[0] = '-';
		neg *= -1;
	}
	if(nbr == 0)
		array[0] = '0';
	while(nbr != 0)
	{
		array[--size] = nbr % 10 * neg + '0';
		nbr /= 10;
	}
	return(array);
}

int main()
{
	int a = 1626518;
	printf("%s", ft_itoa(a));
	return(0);

}
