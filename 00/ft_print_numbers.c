/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 19:01:46 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/28 19:09:37 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_numbers(void)
{
	char a;

	a = '0':
		while(a <= '9')
		{
			write(1, &a, 1);
			a++;
		}
}
написать функцию   <----
*/
int main(void) //for check
{
		char a;

		a = '0';
			while(a <= '9')
			{
				write(1, &a, 1);
				a++;
			}
	write(1, "\n", 1);
}
