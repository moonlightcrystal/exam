/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:17:10 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/21 22:57:05 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int f;
	int x;
	int y;

	x = a;
	y = b;
	if(a == 0 || b == 0)
		return(0);
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	return(x * y / a);
}

int main()
{
	int x = 325;
	int y = 693;

	printf("%d", lcm(x, y));
	return(0);
}
