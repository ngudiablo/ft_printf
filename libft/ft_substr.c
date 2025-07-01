#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char			*new;
    unsigned int	a;

    if (start >= ft_strlen(s))
        len = 0;
    else if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    new = malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    a = 0;
    while (start + a < ft_strlen(s) && a < len)
    {
        new[a] = s[start + a];
        a++;
    }
    new[a] = '\0';
    return (new);
}