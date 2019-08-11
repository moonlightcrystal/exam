/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 17:54:48 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/11 19:00:15 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while(str1[len])
		len++;
	while(*str2 && i < len)
	{
		if(*str2++ == str1[i])
			i++;
	}
	if(len == i)
		write(1, str1, len);
}

int main(int argc, char **argv)
{
	if(argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
