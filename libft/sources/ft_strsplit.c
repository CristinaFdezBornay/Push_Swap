/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:00:49 by anradix           #+#    #+#             */
/*   Updated: 2019/07/04 12:22:19 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_free_strsplit(char **tab)
{
	free(tab);
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	char				**tab;
	unsigned int		j;
	unsigned int		k;

	j = 0;
	if (!s || !(tab = malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			if (!(tab[j] = (char*)malloc(sizeof(char) * ft_word_len(s, c) + 1)))
				return (ft_free_strsplit(tab));
			while (*s != c && *s != '\0')
				tab[j][k++] = *s++;
			tab[j][k++] = '\0';
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}
