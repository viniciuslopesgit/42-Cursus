/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:50:13 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/25 20:51:57 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (c);
	c = c + 32;
	return (c);
}
/*
int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("ft_tolower(%c): %c\n", argv[1][0], ft_tolower(argv[1][0]));
	return (0);
}
*/