/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:25:14 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 23:39:20 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int base;
	int minus;

	minus = 1;
	base = 0;
	while(*str && (*str == ' ' || *str == '\t'))
		str++;
	if(*str == '-')
		base = 0;
//		return(0);
	if(*str == '+')
		str++;
	while(*str && (*str >= '0' && *str <= '9'))
	{
		base = base * 10 + *str - '0';
		str++;
	}
	return(base * minus);
}

int check(int num)
{
	int j = num - 1;
	while(j > 1)
	{
		if(num % j == 0)
			return(0);
		j--; 
	}
	return(1);
}

void ft_putnbr(int n)
{
	char c;

	if(n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int l;
	int summ;
	char s[10];

	summ = 0;
	l = 0;
	if(argc == 2)
	{
		l = ft_atoi(argv[1]);

		while(l > 1)
		{
			if(check(l) == 1)
				summ = summ + l;
			l--;
		}
		ft_putnbr(summ);
	}
	write(1, "\n", 1);
	return(0);
}
