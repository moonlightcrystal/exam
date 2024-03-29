/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:45:29 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/20 20:59:32 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_skip(char *str)
{
	int i;
	int open;

	i = 0;
	open = 1;
	while(open)
	{
		if(*str == '[')
			open++;
		else if(*str == ']')
			open--;
		str++;
		i++;
	}
	return(i);
}

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
		else if(*str == '[')
        {
            while(*pointer)
                brainfuck(str + 1, pointer);
            str += ft_skip(str + 1);
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
	return (0);
}
