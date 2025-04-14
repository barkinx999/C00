#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int boyut;

    boyut = 122;

    while (boyut >=97)
    {
        write(1, &boyut, 1);
        boyut--;
    }
    
}

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}