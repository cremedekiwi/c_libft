/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:36:44 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/29 12:25:25 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* return true si printable */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", ft_isprint('#'));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint(127));
} */
