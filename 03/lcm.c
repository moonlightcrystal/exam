/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:17:10 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/14 21:59:38 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int f;

	f = 0;
	if(a == 0 || b == 0)
		return(0);
	if(a > b)
		f = (a / 2) + 1;
	else
		f = (b / 2) + 1;
	while(!((a % f) == 0 && (b % f) == 0))
		f--;
	return(a * b / f);
}
///((a % f != 0) && (b % f != 0))
int main()
{
	int x = 456;
	int y = 32;

	printf("%d", lcm(x, y));
	return(0);
}
