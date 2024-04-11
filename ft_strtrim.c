/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thguimar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:28:19 by thguimar          #+#    #+#             */
/*   Updated: 2023/10/20 16:28:38 by thguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;
	char		*rtn;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	if ((start - 1) == end)
		return (ft_strdup(""));
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	rtn = (ft_substr(s1, start, end - start + 1));
	return (rtn);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("xyyyzzzzzzzyyyx", "yyy"));
}*/
