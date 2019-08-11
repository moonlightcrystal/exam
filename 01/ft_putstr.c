/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:52:46 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/01 17:26:00 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

int main(void)
{
	char str1[] == "blabla";
	str1 = "blabla";

	char *str2;
	*str2 = "hghhg";
	//str1 = "blabla";
	ft_putstr(str1);
	return(0);
}
