void * ft_memcpy(void *restrict dst, const void *restrict src, size_t len)
{
    size_t i;
    unsigned char *ptr_dst;
    unsigned char *ptr_src;

    ptr_dst = (unsigned char*)dst;
    ptr_src = (unsigned char*)src;
    i = 0;
    while(i < len)
    {
        ptr_dst[i] = ptr_src[i];
        i++;
    }
    return (dst);
}