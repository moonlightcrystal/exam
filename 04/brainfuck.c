/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:45:29 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/19 15:02:06 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void brainfuck(char *str, char *pointer)
{
	int i;

	i = 0;
	while(*str)
	{
		if(*str == '>')
			pointer++;
		else if(*str == '<')
			pointer--;
		else if(*str == '+')
			(*pointer)++;
		else if(*str == '-')
			(*pointer)--;
		else if(*str == '.')
			write(1, pointer, 1);
		else if(*str == ']')
		{
			if(*pointer != 0)
				while(*str != '[')
					str--;
			else 
				return ;
		}
		else if(*str == '[')
		{
            if(*pointer != 0)
			{
				brainfuck(str + 1, pointer);
				while(*str != ']')
					str++;
			}
		}
		str++;
	}
}

int main(int argc, char **argv)
{
	char array[2048] = {0};

	if(argc == 2)
	{
		brainfuck(argv[1], &array[0]);
	}
	write(1, "\n", 1);
	return (0);
}
