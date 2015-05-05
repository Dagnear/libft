/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 11:48:38 by fbicher           #+#    #+#             */
/*   Updated: 2015/05/05 18:57:20 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static char		*ft_find_next_word(char const *s, char c)
{
	while (*s == c)
		s++;
	return ((char *)s);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t		n;

	n = 0;
	s = ft_find_next_word(s, c);
	while (*s != '\0')
	{
		n++;
		s = ft_find_next_word(s + ft_wordlen(s, c), c);
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		n_words;
	size_t		len;
	size_t		i;

	if (s == NULL)
		return (NULL);
	n_words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (tab == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (n_words-- > 0)
	{
		s = ft_find_next_word(s + len, c);
		len = ft_wordlen(s, c);
		if ((tab[i] = ft_strsub(s, 0, len)) == NULL)
			break ;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
