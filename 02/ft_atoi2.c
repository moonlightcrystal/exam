/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:14:49 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 13:24:20 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int minus;
	int base;

	minus = 1;
	base = 0;
	while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if(*str == '-')
	{
		minus = -1;
		str++;
	}
	if(*str == '+')
		str++;
	while(*str && (*str >= '0' && *str <= '9'))
	{
		base = base * 10 + *str - '0';
		str++;
	}
	return(base * (int)minus);
}

int main()
{
	char *dd = "  -12345";
	printf("%d", ft_atoi(dd));
	return(0);
}
