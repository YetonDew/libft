void * ft_memset(void *str, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char*)str;

    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (str);
}