/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:18:37 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/13 19:46:07 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int     *ft_rrange(int start, int end)
{
	int *array;
	int i;

	i = 0;

	if(start > end)
		return(NULL);
	if(!(array = (int*)malloc(sizeof(int) * ((end - start) +  1))))
		 return(NULL);
		 while(start <= end)
			 array[i++] = start++;
		 return(array);
}

int main()
{
	int min = -5;
	int i = 0;
	int max = 35;
	int *l;

	l = ft_rrange(min, max);

	while(max >= min)
	{
		printf("%d", l[i]);
		max--;
		i++;
	}
	return(0);
}
