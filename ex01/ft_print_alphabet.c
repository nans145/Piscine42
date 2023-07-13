/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchalles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:20:30 by cchalles          #+#    #+#             */
/*   Updated: 2023/07/05 14:59:09 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*int main(void)
{
		ft_print_alphabet();
		return (0);
}*/
