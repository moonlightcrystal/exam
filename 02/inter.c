/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:39:04 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/11 19:08:53 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2)
{
	int i;
	int j;
	int ascii[256] = {0};

	i = 0;
	j = 0;
	while(str2[i])
	{
		if(ascii[(int)str2[i]] == 0)
			ascii[(int)str2[i]] = 1;
		i++;
	}
	while(str1[j])
	{
		if(ascii[(int)str1[j]] == 1)
		{
			ascii[(int)str1[j]] = 2;
			write(1, &str1[j], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
