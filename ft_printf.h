
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <lfarias-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:05:39 by lfarias-          #+#    #+#             */
/*   Updated: 2022/06/21 16:57:04 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>

int			ft_printf(const char *str, ...);
char		*ft_utoa(unsigned int n);
char		*ft_hexstr(unsigned long long n, char hexcase);
char		*ft_ptoa(void *ptr);
#endif
