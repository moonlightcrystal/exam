/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 19:23:10 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/28 19:36:35 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 1)
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
*/
int main(int argc, char **argv)
{
	if(argc != 1)
	{
		while(*argv[1])
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return(0);
}
