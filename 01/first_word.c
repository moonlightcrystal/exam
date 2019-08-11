/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:29:52 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/31 18:31:46 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		while(*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		while(*argv[1] &&  (*argv[1] != ' ' && *argv[1] != '\t'))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return(0);
}


/*int		main(int argc, char **argv)
{
	int i;

	i = 0;
    if(argc == 2)
    {
		while(argv[1][i] == '\0' && argv[1][i] == '\0')
			i++;
		if(argv[1][i] != '\0' && argv[1][i] != '\0')
		{
			wh
			write(1, &argv[1][i], 1);
					i++;
					if(argv[1][i] == '\0' && argv[1][i] == '\0')
						break;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
	}*/

