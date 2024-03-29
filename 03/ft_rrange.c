/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:18:37 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/21 23:55:16 by kcorie           ###   ########.fr       */
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
	long int size;

	i = 0;
	size = 0;
	if (end > start)
		size = end - start;
	else 
		size = start - end; 
	if(!(array = (int*)malloc(sizeof(int) * (size + 1))))
		 return(NULL);
	if(end >= start)
	{
		 while(end > start)
		 {
			 array[i] = end--;
			 i++;
		 }
		 array[i] = end;
	}
	else if(start > end)
	{
		while(start > end)
		{
			array[i] = end++;
			i++;
		}
		array[i] = end;
	}
		 return(array);
}

int main()
{
	long int min = INT_MIN + 7;
	long int i = 0;
	long int max = INT_MIN;
	int *l;

	l = ft_rrange(min, max);
	if(max >= min)
	{
		while(max >= min)
		{
			printf("%d", l[i]);
			max--;
			i++;
		}
	}
	else if(min > max)
	{
		while(min >= max)
		{
			printf("%d", l[i]);
			min--;
			i++;
		}
	}
	return(0);
}
