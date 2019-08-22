/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                        :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:18:37 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/21 23:29:49 by kcorie           ###   ########.fr       */
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
	else if(start > end)
	{
		while(start > end)
		{
			array[i] = start--;
			i++;
		}
		array[i] = start;
	}
		 return(array);
}

int main()
{
	int min = 0;
	int i = 0;
	int max = -3;
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
