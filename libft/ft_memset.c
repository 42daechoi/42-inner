/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:20:40 by daechoi           #+#    #+#             */
/*   Updated: 2021/11/16 20:42:55 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	int		i;
	char	*temp;

	i = 0;
	temp = b;
	while (i < size)
	{
		temp[i] = (char)c;
		i++;
	}
	return (b);
}
