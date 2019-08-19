/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:59:17 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/18 22:02:06 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct 		s_list
{
	struct s_list 	*next;
	int 			data;
}					t_list;

int cmp(int a, int b)
{
	if(a <= b)
		return(1);
	return(0);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int hang;

	tmp = lst;
	while(lst->next != NULL)
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0)
		{
			hang = lst->data;
			lst->data = lst->next->data;
			lst->next->data = hang;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return(lst);
}

int main(void)
{
	t_list *lst;
	int i = 17;
	int j = 21;
	int k = 25;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = k;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = i;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->data = j;
	lst->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->data = j;
	lst->next->next->next->next =  NULL;

	lst = sort_list(lst, cmp);

	while (lst != NULL)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}

	return (0);
}
