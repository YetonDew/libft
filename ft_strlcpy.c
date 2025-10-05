#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  srclen;
    size_t	copylen;
    srclen = ft_strlen(src);
    if (size > 0)
    {
	    if (srclen >= size)
	    {
		    copylen = size - 1;
	    }
	    else
	    {
		    copylen = srclen;
	    }
	    ft_memcpy(dst, src, copylen);
	    dst[copylen] = '\0';
    }
    return (srclen);
}
