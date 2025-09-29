#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"
#include "ft_memcpy.c"

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
    size_t srclen = ft_strlen(src);

    if (size > 0) {
        size_t copylen = (srclen >= size) ? size - 1 : srclen;
        ft_memcpy(dst, src, copylen);
        dst[copylen] = '\0';
    }
    return srclen;
}

int main() {
    char destino[10];
    const char *origen = "HolaMundo!";

    size_t len = ft_strlcpy(destino, origen, sizeof(destino));

    printf("Destino: %s\n", destino);
    printf("Longitud de src: %zu\n", len);

    if (len >= sizeof(destino)) {
        printf("La cadena fue truncada.\n");
    }
}
