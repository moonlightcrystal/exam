/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:31:50 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 15:40:28 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		while(*argv[1] != '\0')
		{
			if((*argv[1] >= 'a' && *argv[1] <= 'z') || (*argv[1] >= 'A' && *argv[1] <= 'Z'))
			{
				if(*argv[1] >= 'A' && *argv[1] <= 'Z')
				{
					*argv[1] = 'Z' - (*argv[1] - 'A');
					write(1, argv[1], 1);
				}
				else
				{
					*argv[1] = 'z' - (*argv[1] - 'a');
					write(1, argv[1], 1);
				}
			}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
