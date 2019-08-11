/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:51:52 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/11 21:04:09 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i;

    i = 8;
    while (i--)
        write(1, (octet >> i) & 1 ? "1" : "0", 1);
}

unsigned char swap_bits(unsigned char octet)
{
	octet = (octet << 4) | (octet >> 4);
	return(octet);
	//return ((octet << 4) | (octet >> 4));
}

int	main(void)
{
	char c = 'M';
	print_bits(c);
	write(1, "\n", 1);
	print_bits(swap_bits(c));
	return (0);
}

