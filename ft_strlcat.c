
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	if (dstsize == 0 || ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dst_len);
}
