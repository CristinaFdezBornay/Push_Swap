/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epham <epham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:29:59 by anradix           #+#    #+#             */
/*   Updated: 2019/07/04 12:20:59 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_free_init_tab(char **tab)
{
	free(tab);
	return (NULL);
}

char	**ft_init_tab(size_t y, size_t x, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (y + 1))))
		return (NULL);
	while (i < y)
	{
		j = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (x + 1))))
			return (ft_free_init_tab(tab));
		while (j < x)
		{
			tab[i][j] = c;
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
