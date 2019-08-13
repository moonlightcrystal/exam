/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:31:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/13 17:50:35 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>
int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		++i;
	}
	return(i);
}

//while((begin_list = begin_list->next))
	 //++i;

int main()
{
	t_list *mama;
	t_list *papa;

	if(!(mama = (t_list*)malloc(sizeof(t_list))))
		 return(-1);
	if(!(papa = (t_list*)malloc(sizeof(t_list))))
		return(-1);
	mama->data = "gfgf";
	mama->next = papa;
	papa->next = NULL;
	printf("%d", ft_list_size(mama));
				return(0);
}
