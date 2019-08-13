/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:40:24 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 22:00:15 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	while(n % 2 == 0)
		n = n / 2;
	return((n == 1) ? 1 : 0);
}

int main()
{
	int a = 256;
	printf("%d", is_power_of_2(a));
	return(0);
}
