#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (!len || start > slen)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > (slen - start))
		len = slen - start;
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	return ((char *)ft_memmove((void *)str, (void *)(s + start), len));
}
