/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchalles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:22:28 by cchalles          #+#    #+#             */
/*   Updated: 2023/07/05 20:11:46 by cchalles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	while (n >= 0)
	{
		write(1, "P", 1);
		break ;
	}
	while (n < 0)
	{
		write(1, "N", 1);
		break ;
	}
}

/*int	main(void)
{
	ft_is_negative(-1);
	return (0);
}*/
