/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchevri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:54:44 by thchevri          #+#    #+#             */
/*   Updated: 2023/07/13 13:25:51 by thchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strncpy(char *dest, char *src, unsigned int a)

{
	unsigned int i;


	i = 0;
	while (src[i] && i < a)
	{
		dest[i] = src[i];
	       	i++;	
	}
	while (i < a)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}

