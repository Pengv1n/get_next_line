/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aregenia <aregenia@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:05:10 by aregenia          #+#    #+#             */
/*   Updated: 2021/10/20 00:05:14 by aregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include "stdlib.h"
# include "unistd.h"
# include "limits.h"

char	*get_next_line(int fd);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *str, int s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
