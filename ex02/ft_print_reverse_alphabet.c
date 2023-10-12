/* ************************************************************************** */
/*
                */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet 	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Haingo        <adresse@ecole.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:50:00 by Haingo            #+#    #+#             */
/*   Updated: 2023/10/10 08:50:00 by Haingo           ###   ########.fr       */
/*
                */
/* ************************************************************************** */
#include "ft_print_reverse_alphabet.h"
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 123;
	while (c >= 96)
	{
		c--;
		write (1, &c, 1);
	}
}
