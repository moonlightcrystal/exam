/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:21:05 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/22 11:25:45 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int check_base(const char c)
{
	int n;

	n = 0;
	if(c >= '0' && c <= '9')
		n = c - '0';
	else if(c >= 'a' && c <= 'z')
		n = c - 'a' + 10;
	else if(c >= 'A' && c <= 'Z')
		n = c - 'A' + 10;
	else
		n = -1;
	return(n);

}

int	ft_atoi_base(const char *str, int str_base)
{
	int neg;
	int nb;
	int current;

	neg = 1;
	nb = 0;
	while(*str && (*str == ' ' || *str == '\n' || *str == '\t'|| *str == '\f' || *str == '\r' || *str == '\v'))
		str++;
	if(*str == '-')
	{
		neg *= -1;
		str++;
	}
	if(*str == '+')
		str++;
	current = check_base(*str);
	while(current >= 0 && current < str_base)
	{
		nb = nb * str_base + current;
		str++;
		current = check_base(*str);
	}
	return(nb * neg);
}

int main()
{
	char *str1 = "0";

	printf("%d", ft_atoi_base(str1, 8));
	return(0);
}

