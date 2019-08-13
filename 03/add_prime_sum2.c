/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:14:18 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/13 14:51:57 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
	int minus;
	int base;

	base = 0;
	minus = 1;
	while(*s == ' ' && (*s >= 9 && *s <= 13))
		s++;
	if(*s == '-')
		base = 0;
	if(*s == '+')
		s++;
	while(*s && *s >= '0' && *s <= '9')
	{
		base = base * 10 + *s - '0';
		s++;
	}
	return(base * minus);
}

int check(int nub)
{
	int j;
	j = nub - 1;
	while(j > 1)
	{
		if(nub % j == 0)
			return(0);
		j--;
	}
	return(1);
}

void ft_putnbr(int numer)
{
	char sym;

	if(numer > 9)
		ft_putnbr(numer / 10);
	sym  = numer % 10 + '0';
	write(1, &sym, 1);
}

int main(int argc, char **argv)
{
	int n;
	int summ;

	n = 0;
	summ = 0;
	if(argc == 2)
	{
		n = ft_atoi(argv[1]);
		while(n > 1)
		{
			if(check(n) == 1)
				summ = summ + n;
			n--;
		}
		ft_putnbr(summ);
	}
	write(1, "\n", 1);
	return(0);
}
