void ft_bzero(void *str, size_t len)
{
    char *ptr;
    size_t i;

    i = 0;
    ptr = (char*)str;
    while(i < len)
    {
        ptr[i++] = 0;
    }
}   