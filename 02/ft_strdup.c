/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:50:13 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/11 15:29:32 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	char *string;
	int i;

	i = 0;
	while(src[i] != '\0')
		i++;
	if(!(string = (char*)malloc(sizeof(char) * (i + 1))))
		return(NULL);
	string[i] = '\0';
	while(i >= 0)
	{
		string[i] = src[i];
		i--;
	}
	return(string);
}

int main(void)
{
	char *kl = "nnanan";
	printf("%s", kl);
	printf("\n");
	printf("%s", ft_strdup(kl));
}
