#include <stdio.h>

/*
** The ft_memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b. Returns it's first argument.
*/

void    *ft_memset(void *b, int c, size_t len)
{
    char    *str;

    str = b;
    while (len > 0)
    {
        str[len - 1] = (unsigned char)c;
        len--;
    }
    return (b);
}

int main(void)
{
  char  qualquer[] = "Aodrigo";
  ft_memset(qualquer, 'R', 1);
}
