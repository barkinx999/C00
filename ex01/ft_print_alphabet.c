#include <unistd.h>

void ft_print_alphabet(void)
{
    int boyut;

    boyut = 97;

    while (boyut <=122)
    {
        write(1, &boyut, 1);
        boyut++;
    }
    
}

int main()
{
    ft_print_alphabet();
    return 0;
}