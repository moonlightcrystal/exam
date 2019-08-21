/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 20:57:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/21 22:15:25 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*void rev(char *str)
{
	char *ptr;
	int z;

	ptr = str;
	while(*str)
		str++;
	str--;
	while(str != ptr)
	{
		z = 0;
		while(*str != ' ' && *str != '\t' && str != ptr)
		{
			str--;
			z++;
		}
		if(str != ptr)
		{
			write(1, str + 1, z);
			write(1, " ", 1);
			str--;
		}
		else
			write(1, str, z + 1);
	}
}
*/

void rev_wstr(char *str, int first)
{
	int start;
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] == ' ')
		++i;
	if (str[i] == '\0') 
			return;
	start = i;
	while (str[i] != '\0' && str[i] != ' ')
		i++;
	rev_wstr(str + i, 0);
	write(1, str + start, i - start);
	if (first == 0)
		write(1, " ", 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		rev_wstr(argv[1], 1);
	}
	write(1, "\n", 1);
	return(0);
}
