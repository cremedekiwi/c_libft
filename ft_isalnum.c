/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:53:04 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/29 12:23:26 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* return true si chiffre ou lettre */
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') \
		|| (c >= 'a' && c <= 'z') \
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum('@'));
} */
