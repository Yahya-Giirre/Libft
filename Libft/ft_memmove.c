#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (&source[0] >= &dest[0])
		return (ft_memcpy(dest, source, len));
	else
	{
		while (len--)
			(dest)[len] = (source[len]);
	}
	return (dst);
}
