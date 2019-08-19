/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:28:02 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/18 19:58:55 by kcorie           ###   ########.fr       */
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
    int *i = data;
    int *j = data_ref;

    if (*i == *j)
        return (0);
    return (1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *next;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		next = (*begin_list)->next;
		free(*begin_list);
		*begin_list = next;
	}
	if (!*begin_list)
		return ;
	current = *begin_list;
	while (current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			next = current->next->next;
			free(current->next);
			current->next = next;
		}
		else
			current = current->next;
	}
}

int main(void)
{
    t_list *lst;
    int i = 17;
    int j = 21;
    int k = 25;

    lst = (t_list*)malloc(sizeof(t_list));
    lst->data = &j;
    lst->next = (t_list*)malloc(sizeof(t_list));
    lst->next->data = &j;
    lst->next->next = (t_list*)malloc(sizeof(t_list));
    lst->next->next->data = &j;
    lst->next->next->next = (t_list*)malloc(sizeof(t_list));
    lst->next->next->next->data = &i;
    lst->next->next->next->next =  NULL;

    ft_list_remove_if(&lst, &i, cmp);

    while (lst != NULL)
    {
        printf("%d\n", *(int*)lst->data);
        lst = lst->next;
    }

    return (0);
}
