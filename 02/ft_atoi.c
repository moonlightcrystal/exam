/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:07:30 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/01 18:41:31 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int minus;
	int basic;

	minus = 1;
	basic = 0;
	while(*str && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\f'))
		str++;
	if(*str == '-')
	{
		minus = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while(*str && *str >= '0' && *str <= '9')
	{
		basic = 10 * basic + *str - '0';
		str++;
	}
	return(minus * (int)basic);
}

int main()
{
	char *dd = "  -12345";
	printf("%d", ft_atoi(dd));
	return(0);
}
