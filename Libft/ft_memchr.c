/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:06:40 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/02 12:07:19 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	lt;
	unsigned int	i;	
	const char		*wrd;

	wrd = (const char *)s;
	i = 0;
	lt = (unsigned char)c;
	while (wrd[0] != lt && i < n && wrd[0] != '\0')
	{
		wrd++;
		i++;
	}
	if (wrd[0] != lt || i >= n)
		return (0);
	return ((void *)wrd);
}
