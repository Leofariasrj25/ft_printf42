/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:12:28 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/03 19:31:26 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*p;
	size_t		i;

	p = (char *) b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
