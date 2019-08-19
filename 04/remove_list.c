/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:02:02 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/18 20:57:29 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

int cmp(void *data, void *data_ref)
{
	int *x = data;
	int *y = data_ref;

	if(*x == *y)
		return(0);
	return(1);
}


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *next;
	t_list *current;

	if(begin_list == NULL || *begin_list == NULL)
		return;
	while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		next = (*begin_list)->next;
		free(*begin_list);
		*begin_list = next;
	}
	if(!(*begin_list))
		return ;
	current = *begin_list;
	while(current && current->next)
	{
		if(cmp(current->next->data, data_ref) == 0)
		{
			next = current->next->next;
			free(current->next);
			current->next = next;
		}
		else
			current = current->next;
	}
}

int main()
{
	t_list *mia;

	char *str1 = "FUCK";

	char *str2 = "FLOWER";

	mia = (t_list*)malloc(sizeof(t_list));
	mia->data = str1;
	mia->next = (t_list*)malloc(sizeof(t_list));
	mia->next->data = str2;
	mia->next->next = (t_list*)malloc(sizeof(t_list));
	mia->next->next->data = str1;
	mia->next->next->next = NULL;

	ft_list_remove_if(&mia, str1, cmp);
	while(mia != NULL)
	{
		printf("%s\n", mia->data);
		mia = mia->next;
	}
	return(0);
}
