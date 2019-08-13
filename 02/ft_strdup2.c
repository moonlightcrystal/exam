/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:37:51 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/12 12:52:47 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char    *ft_strdup(char *src)
{
	char *dst;
	int len;

	len = 0;
	while(src[len])
		len++;
	if(!(dst = (char*)malloc(sizeof(char) * (1 + len))))
	   return(NULL);
//*dst = '\0';	
dst[len] = '\0';
	while(len >= 0)
	{
		dst[len] = src[len];
		len--;
	}
	return(dst);
}

int main(void)
{
	char *s = "klmn";
	printf("%s\n", s);
	printf("%s",ft_strdup(s));
	return(0);

}

