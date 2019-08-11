/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 22:21:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/07/28 22:39:07 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	char *s;

	s = s1;
	while(*s2 != '\0')
	{
		*s1++ = *s2++;		
	}
	*s1 = '\0';
	return(s);
}

#include <stdio.h>

int main(void)
{
	char str1[] = "GADADA";
	char str2[] = "GUCCI";

	ft_strcpy(str1, str2);
	printf("%s", str1);
	return(0);
}
