/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouladh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 08:27:29 by ybouladh          #+#    #+#             */
/*   Updated: 2018/10/09 13:34:39 by ybouladh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	jumper;

	jumper = 0;
	if (ft_strlen(src) < len)
	{
		while (src[jumper] != '\0')
		{
			dst[jumper] = src[jumper];
			jumper++;
		}
	}
	else
	{
		while (jumper < len)
		{
			dst[jumper] = src[jumper];
			jumper++;
		}
	}
	while (jumper < len)
	{
		dst[jumper] = '\0';
		jumper++;
	}
	return (dst);
}
