/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 21:23:43 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/22 23:05:43 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int ft_count_words(char *str)
{
	int count;

	count = 0;
	while(*str)
	{
		while(*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if(*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			count++;
			while(*str && *str != ' ' && *str != '\t' && *str != '\n')
				str++;
		}
	}
	return(count);
}

char *malloc_w(char *str)
{
	char *milk_word;
	int i;

	i = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	milk_word = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		milk_word[i] = str[i];
		i++;
	}
	milk_word[i] = '\0';
	return(milk_word);
}

char    **ft_split(char *str)
{
	int count_w;
	char **array;
	int i;

	i = 0;
	count_w = ft_count_words(str);
	array = (char**)malloc(sizeof(char*) * (count_w + 1));
	while(*str)
	{
		while(*str && (*str == ' ' || *str == '\t' || *str == '\n'))
            str++;
		if(*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			array[i] = malloc_w(str);
			i++;
			while(*str && *str != ' ' && *str != '\t' && *str != '\n')
				str++;
		}
	}
	array[i] = NULL;
	return(array);
}

#include <stdio.h>

int main()
{
	char **str;
	char *words = "my love  did you see    	me I want youuuuuu    ";

	str = ft_split(words);
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
	printf("%s\n", str[4]);
	printf("%s\n", str[5]);
	printf("%s\n", str[6]);
	printf("%s\n", str[7]);
	printf("%s\n", str[8]);
	printf("%s\n", str[9]);
	return(0);
}
