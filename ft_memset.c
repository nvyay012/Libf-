
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;

	pb = (unsigned char *) b;
	while (len)
	{
		*pb = (unsigned char) c;
		pb++;
		len--;
	}
	return (b);
}
