/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 23:00:11 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/30 23:21:22 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == a)
			str[i] = b;
		i++;
	}
	return(str);
}

int		main(int argc, char **argv)
{
	char *str1;

	if(argc == 4)
	{
		str1 = replace(argv[1], *argv[2], *argv[3]);
		//printf("%s",str1);
		while(*str1 != '\0')
		{
			write(1, str1++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
	}

/*#include <stdio.h>
int main(void)
{
	char str[] = "mama";
	char a = 'a';
	char b = 'b';
	replace(str, a, b);
	printf("%s", str);
	return(0);
}
*/
