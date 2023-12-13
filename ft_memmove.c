/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:17:29 by hbarda            #+#    #+#             */
/*   Updated: 2023/12/13 18:17:30 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dst > src && src + len > dst)
	{
		pdst += len - 1;
		psrc += len - 1;
		while (len-- > 0)
			*pdst-- = *psrc--;
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
