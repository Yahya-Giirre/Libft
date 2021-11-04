#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
