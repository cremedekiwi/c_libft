/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:56:05 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/29 12:23:57 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* return true si lettre */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('h'));
	printf("%d\n", ft_isalpha('#'));
} */
