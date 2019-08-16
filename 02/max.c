/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:33:56 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/14 16:48:05 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int max;
	int i;

	max = 0;
	i = 0;
	if(!(tab))
		return(0);
	while(len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
		len--;
	}
	return(max);
}

int main()
{
	int arra[] = {17, 156, 777, 1, 1001};
	printf("%d", max(arra, 5));
	return(0);
}
