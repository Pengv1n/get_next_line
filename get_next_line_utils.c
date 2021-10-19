/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aregenia <aregenia@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:04:35 by aregenia          #+#    #+#             */
/*   Updated: 2021/10/20 00:06:43 by aregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char	*string)
{
	size_t	res;

	res = 0;
	while (string[res])
		res++;
	return (res);
}

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strchr(const char *str, int s)
{
	while (*str != '\0' && *str != (char)s)
		str++;
	if (*str != (char)s)
		return (0);
	else
		return ((char *)str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;
	char			*res;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!res)
		return (NULL);
	i--;
	while (s1[++i])
		res[i] = s1[i];
	i--;
	while (s2[++i - l1])
		res[i] = s2[i - l1];
	res[i] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	k;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = start;
	while (s[i] && i <= start + len - 1)
		i++;
	res = (char *)malloc(sizeof(char) * (i - start + 1));
	if (!res)
		return (NULL);
	k = 0;
	while (start < i)
		res[k++] = s[start++];
	res[k] = '\0';
	return (res);
}
