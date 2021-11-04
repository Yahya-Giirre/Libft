#include "libft.h"

static int	ft_get_digits(int n)
{
	if ((n / 10) == 0)
		return (1);
	else
		return (ft_get_digits(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	unsigned int		nb;
	int					len;
	char				*str;

	nb = (unsigned int)n;
	len = ft_get_digits(n);
	if (n < 0)
	{
		nb = -(unsigned int)n;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- >= 0)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
