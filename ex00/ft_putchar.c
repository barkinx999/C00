#include <unistd.h>

void ft_putchar(void)
{
    char c;
    write(1, &c, 1);
}