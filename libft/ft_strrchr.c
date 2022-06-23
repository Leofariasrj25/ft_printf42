/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:43:41 by lfarias-          #+#    #+#             */
/*   Updated: 2022/06/23 12:39:38 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	find;

	s_len = (int) ft_strlen(s);
	find = (char) c;
	while (s_len >= 0)
	{
		if (s[s_len] == find)
			return ((char *) &s[s_len]);
		s_len--;
	}
	return (NULL);
}
