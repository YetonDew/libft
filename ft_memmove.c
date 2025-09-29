void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *ptr_dst;
    unsigned char *ptr_src;
    size_t i;

    ptr_dst = (unsigned char*)dst;
    ptr_src = (unsigned char*)src;
    i = 0;

    if (ptr_dst < ptr_src) {
        while(i < len)
        {
            ptr_dst[i] = ptr_src[i];
            i++;
        }
    } else if (ptr_dst > ptr_src) {
        while(len--)
    {
        ptr_dst[len] = ptr_src[len];
    }
    }
    else{
        return(dst);
    }
    return (dst);
}