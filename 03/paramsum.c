/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 19:22:35 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/17 19:40:21 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int n)
{
	char num;

	if(n > 9)
		putnbr(n / 10);
	num = n % 10 + '0';
	write(1, &num, 1); 
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc != 1)
	{
		/*	i = 0;
		while(argv[i + 1])
		{
			i++;
			}*/
		putnbr(argc - 1);
	}
	if(argc == 1)
		write(1, "0", 1);
	write(1, "\n", 1);
	return(0);
}

