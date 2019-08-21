/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain_fuck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:05:17 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/20 22:04:53 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int skip(char *str)
{
	int size;
	int open;

	size = 0;
	open = 1;
	while(open)
	{
		if(*str == '[')
			open++;
		else if(*str == ']')
			open--;
		str++;
		size++;
	}
	return(size);
}

void brainfuck(char *str, char *ptr)
{
	while(*str)
   	{
		if(*str == '>')
			ptr++;
		else if(*str == '<')
			ptr--;
		else if(*str == '+')
			(*ptr)++;
		else if(*str == '-')
			(*ptr)--;
		else if(*str == '.')
			write(1, ptr, 1);
		else if(*str == '[')
		{
			while(*ptr != 0)
				brainfuck(str + 1, ptr);
			str += skip(str + 1);
		}
		else if(*str == ']')
			return ;
		str++;
	}
}

int main(int argc, char **argv)
{
	char array[2048] = {0};

	if(argc == 2)
		brainfuck(argv[1], &array[0]);
	else
		write(1, "\n", 1);
	return(0);
}
