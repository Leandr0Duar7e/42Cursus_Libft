/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 13:26:21 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	**s;
	int		i;

    printf( "Function:\tft_split\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf( "c:\ti\n");
	s = ft_split( "Primeiro Exemplo", 'i');
	for (i = 0; s[i] != (void *)0; i++)
	{
		printf("\n i: %s", s[i]);
	}
}
