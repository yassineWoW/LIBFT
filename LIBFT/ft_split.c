/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:00:55 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/17 21:39:50 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char delimiter)
{
	int	i;
	int	wordcount;
	int flag = 1;

	i = 0;
	wordcount = 0;
	while(s[i] != '\0')
	{
		if (s[i] == delimiter)
			flag = 1;
		if (s[i] != delimiter && flag)
		{
			flag = 0;
			wordcount++;
		}
		i++;
	}
	return (wordcount);
}

static	char **allowords(char **split, char const *s ,int wordcount)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (wordcount > k)
	{
		while (s[i] == c)
				i++;
		j = i;
		if(s[i] != '\0' && s[i] != c)
		{	
			while (s[i] != c && s[i] != '\0')
				i++;
			split[k] = ft_substr(s, j, i - j);
			ft_strlcpy( *split[k], &s[j], (i - j) + 1);
			j = i;
			k++;
		}
	}
	return (split);
}

static void	freee(char	**split)
{
	int	i;
	
	i = 0;
	while (i > 0)
	{
		i--;
		free(split[i]);
	}
	free(split);
}

char **ft_split(char const *s, char c)
{
	char	**splited;
	int count;

	count = ft_countwords(s, c);
	splited = (char **)malloc((count + 1) * sizeof(char *));
	splited[count + 1] = NULL;
	if (!splited)
		return (NULL);	
	allowords(s, c, count);
	free(splitted);
	return (NULL);
}