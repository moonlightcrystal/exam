/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:39:23 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 17:57:11 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if(*argv[2] == '+')
            printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if(*argv[2] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if(*argv[2] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if(*argv[2] == '%')
            printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return(0);
}