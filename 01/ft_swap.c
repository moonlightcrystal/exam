/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:00:01 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/01 17:32:31 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int *c;
	int e;

	c = a; // *c = *a; 
	c = &e; //с указывает на ардес е
	c = *a; //по указателю а достаю значение, записываю в с
	*a = *b;
	*b = c;
}

#include <stdio.h> 
int main(void)
{
	int x[] = 5; 
	int y[] = 7;

	ft_swap(x, y);
	printf("%d %d", x, y);

}
