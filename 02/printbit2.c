/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbit2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:08:46 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 19:36:16 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

char reverse(unsigned char o)
{
	unsigned char r;
	unsigned i;

	i = 8;
	while(i--)
	{
		r = (r << 1) | (o & 1);
		o = o >> 1;
	}
	return(r);
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 8;
	while(i--)
		write(1, (octet >> i) & 1 ? "1" : "0", 1);
}

char reverce(unsigned char oct)
{
	oct = (oct >> 4) | (oct << 4);
	return(oct);
}

int main()
{
	char a = 10;

	print_bits(a);
	write(1, "\n", 1);
	print_bits(reverce(a));
	write(1, "\n", 1);
	print_bits(reverse(a));
		return(0);

}
