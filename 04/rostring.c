/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:20:45 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/21 22:35:52 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rostring(char *str)
{
	char *ptr;
	while(*str == ' ' || *str == '\t')
		str++;
	ptr = str;
	while(*str != ' ' && *str != '\t' && *str != '\0')
		str++;
	while(*str)
	{
		while(*str == ' ' || *str == '\t')
				str++;
		while(*str != ' ' && *str != '\t' && *str != '\0')
			write(1, str++, 1);
		write(1, " ", 1);
	}
	while(*ptr != ' ' && *ptr != '\t' && *ptr != '\0')
		write(1, ptr++, 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		rostring(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
