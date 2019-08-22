/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:33:20 by kcorie            #+#    #+#             */
/*   Updated: 2019/08/22 20:20:21 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct s_point
{
	int x;
	int y;
} 				t_point;

char **make_area(char **zone)
{

	char **arr;
	int i;
	int z;

	i = 0;
	arr = (char**)malloc(sizeof(char*) * 6);
	while(i < 5)
	{
		arr[i] = (char*)malloc(sizeof(char) * 9);
		z = 0;
		while(zone[i][z] != '\0')
		{			
			arr[i][z] = zone[i][z];
			z++;
		}
		arr[i][z] = '\0';
		i++;
	}
	arr[i] = NULL;
	return(arr);
}

void print_tab(char **area)
{
	int i;
	char *ptr;

	i = 0;
	while(*area != NULL)
	{
		ptr = *area;
		while(*ptr != '\0')
		{
			write(1, ptr, 1);
			ptr++;
		}
		write(1, "\n", 1);
		area++;
	}
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char sym;
	t_point recur;

	sym = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	if(begin.y + 1 < size.y && tab[begin.y + 1][begin.x] == sym)
	{
		recur.y = begin.y + 1;
		recur.x = begin.x;
		flood_fill(tab, size, recur);
	}
	if(begin.y > 0 && tab[begin.y - 1][begin.x] == sym)
    {
        recur.y = begin.y - 1;
		recur.x= begin.x;
        flood_fill(tab, size, recur);
    }
	if(begin.x + 1 < size.x && tab[begin.y][begin.x + 1] == sym)
    {
        recur.x = begin.x + 1;
		recur.y = begin.y;
        flood_fill(tab, size, recur);
    }
	if(begin.x > 0 && tab[begin.y][begin.x - 1] == sym)
    {
        recur.x = begin.x - 1;
		recur.y= begin.y;
        flood_fill(tab, size, recur);
    }
}

int main(void)
{
    char **area;
    t_point size = { 8, 5 };
    t_point begin = { 0, 0 };
    char *zone[] = {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11100001"
    };
    area = make_area(zone);
    print_tab(area);
    flood_fill(area, size, begin);
    write(1, "\n", 1);
    print_tab(area);
    return (0);
}
