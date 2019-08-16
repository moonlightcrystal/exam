/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:29:51 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/14 14:37:26 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int minus;
	int base;

	minus = 1;
	base = 0;

	while(*str == ' ' || *str == '\t')
		str++;
	if(*str == '-')
	{
		minus = -1;
		str++;
	}
	if(*str == '+')
		str++;
	while(*str && *str >= '0' && *str <= '9')
	{
		base = base * 10 + *str - '0';
		str++;
	}
	return(base * minus);
}

void  print_hex(int num)
{
	char *hex;

	hex = "0123456789abcdef";
	if(num > 16)
		print_hex(num / 16);
	write(1, &hex[num % 16], 1);
}

int main(int argc, char **argv)
{
	int num;

	num = 0;
	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
	return(0);
}
