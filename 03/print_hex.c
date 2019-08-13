/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:29:51 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/13 22:08:48 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int minus;
	int base;

	minus = 1;
	base = 0;

	while(*str == ' ' && (*str >= 9 || *str <= 13))
		str++;
	if(*str = '-')
	{
		minus = -1;
		str++;
	}
	if(*str = '+')
		str++;
	while(*str && *str >= 0 && *str <= 9)
	{
		base = base * 10 + *str - '0';
		str++;
	}
	return(base * minus);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{

	}
}
