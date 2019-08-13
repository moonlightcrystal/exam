/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:45:57 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 17:37:44 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *s1, char *s2)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while(s1[len])
		len++;
	while(*s2 && i < len)
	{
		if(*s2++ == s1[i])
			i++;
	}
	if(len == i)
		write(1, s1, len);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		solve(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}
