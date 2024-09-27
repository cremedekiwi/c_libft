/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:59:54 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/29 14:35:55 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* print c sur le fd */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('a', 1);
	return (0);
} */
