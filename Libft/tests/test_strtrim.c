/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 13:02:25 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_strtrim\n" );
    printf( "s1:\tPriiimeiro Exemppplo\n");
    printf( "s2:\tip\n");
    printf("Return:\t\t%s\n", ft_strtrim( "Priiimeiro Exemppplo", "ip"));
    printf( "Function:\tft_strtrim\n" );
    printf( "s1:\tSegundo Exemplo\n");
    printf( "s2:\tSo\n");
    printf("Return:\t\t%s\n", ft_strtrim( "Segundo Exemplo", "So"));
    printf( "Function:\tft_strtrim\n" );
    printf( "s1:\tTTTterceiro Exemplooo\n");
    printf( "s2:\t338ohuTw\n");
    printf("Return:\t\t%s\n", ft_strtrim( "TTTterceiro Exemplooo", "338ohuTw"));
}
