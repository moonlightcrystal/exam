/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:04:07 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/28 21:16:04 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	char z;

	z = 73;
	while(z != 78)
	{
		if(z == 73)
		{
			write(1, &z, 1);
			z = z + 13;
		}
		else if(z == 86)
		{
			write(1, &z, 1);
			z = z - 21;
		}
		else if(z == 65)
		{
			write(1, &z, 1);
			z = z + 13;
		}
	}
	write(1, &z, 1);
	write(1, "<3\n", 3);
	return(0);
}
