/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:52:33 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/29 14:43:12 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* si maj on met en min */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	printf("%c\n", ft_tolower('K'));
} */
