/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:19:15 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 12:37:02 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *s1, char *s2)
{
	int i;
	int ascii[256] = {0};

	i = 0;
	while(s2[i])
	{
		if(ascii[(int)s2[i]] == 0)
		{
			ascii[(int)s2[i]] = 1;
		}
		i++;
	}
	i = 0;
	while(s1[i])
	{
		if(ascii[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
            ascii[(int)s1[i]] = 2;
		}
		i++;
	}
}

int main(int argc , char **argv)
{
	if(argc == 3)
	{
		solve(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}
