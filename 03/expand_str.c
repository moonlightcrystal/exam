/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 19:36:46 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/14 20:07:33 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int space;

	space = 0;
	if(argc == 2)
	{
		while(*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		while(*argv[1])
		{
			if(*argv[1] == ' ' || *argv[1] == '\t')
				space = 1;
			if(*argv[1] && *argv[1] != ' ' && *argv[1] != '\t')
			{
				if(space == 1)
					write(1, "   ", 3);
			space = 0;
			write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n" ,1);
	return(0);
}
