/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:01:51 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/21 20:26:49 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


int skip(char *str)
{
	int open;
	int skip;

	open = 1;
	skip = 0;
	while(open)
	{
		if(*str == '[')
			open++;
		if(*str == ']')
			open--;
		str++;
		skip++;
	}
	return(skip);
}

void brain(char *str, char *ptr)
{
	while(*str)
	{
		if(*str == '>')
			ptr++;
		else if(*str == '<')
			ptr--;
		else if(*str == '-')
			(*ptr)--;
		else if(*str == '+')
			(*ptr)++;
		else if(*str == '.')
			write(1, ptr, 1);
		else if(*str == '[')
		{
			while(*ptr != 0)
				brain(str + 1, ptr);
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
		brain(argv[1], &array[0]);
	else
		write(1, "\n", 1);
	return(0);
}
