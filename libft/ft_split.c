/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:23:11 by daechoi           #+#    #+#             */
/*   Updated: 2021/11/23 19:12:02 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	int		inword;
	int		issep;
	size_t	i;
	size_t	cnt;

	inword = 0;
	issep = 0;
	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			issep = 1;
		else
			issep = 0;
		if (inword == 1 && issep == 1)
			inword = 0;
		if (inword == 0 && issep == 0)
		{
			inword = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

size_t	ft_countspell(char const *s, char c, size_t *pos)
{
	size_t	cnt;
	int		inword;

	inword = 0;
	cnt = 0;
	while (s[*pos])
	{
		if (inword == 1 && s[*pos] == c)
			break ;
		if (s[*pos] != c)
		{
			inword = 1;
			cnt++;
		}
		(*pos)++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	pos;
	size_t	spellcnt;
	size_t	j;

	i = 0;
	pos = 0;
	if (!s || *s == '\0')
	{
		arr = (char **)malloc(1);
		arr[0] = NULL;
		return (arr);
	}
	arr = (char **)malloc(ft_countword(s, c) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < ft_countword(s, c))
	{
		spellcnt = ft_countspell(s, c, &pos);
		arr[i] = (char *)malloc(spellcnt * sizeof(char));
		if (!arr[i])
			return (NULL);
		j = 1;
		while (spellcnt > 0)
			arr[i][(spellcnt--) - 1] = s[pos - (j++)];
		i++;
	}
	return (arr);
}
