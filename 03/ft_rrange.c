/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:18:37 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/16 18:40:43 by kcorie           ###   ########.fr       */
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
	int size;

	i = 0;
	size = 0;
	if(end < 0)
		size = (end * -1) - start;
	else if(end > start)
		size = end - start;
	else
		size = start - end; 
	if(!(array = (int*)malloc(sizeof(int) * (size + 1))))
		 return(NULL);
	if(end >= start)
	{
		 while(start < end)
		 {
			 array[i] = start++;
			 i++;
		 }
		 array[i] = start;
	}
	else if(end < start)
	{
		while(start >= end)
		{
			array[i] = start--;
			i++;
		}
	}
		 return(array);
}

int main()
{
	int min = -1;
	int i = 0;
	int max = 2;
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
	else if(min < max)
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
