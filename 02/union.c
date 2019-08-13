/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:14:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/11 21:35:37 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *s1, char *s2)
{
	int i;
	int j;
	int ascii[256] = {0};

	i = 0;
	j = 0;
	while(s1[i])
	{
		if(ascii[(int)s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			ascii[(int)s1[i]] = 1;
		}
		i++;
	}
	while(s2[j])
	{
		if(ascii[(int)s2[j]] == 0)
		{
			write(1, &s2[j], 1);
			ascii[(int)s2[j]] = 1;
		}
	j++;
	} 
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
