#include <stdio.h>
#include <stdlib.h>

void    calling_lotto_function (void)
{

        for ( int i = 0 ; i < 10 ; i++)
        {
            printf("[%2d] = %d\n", random());
        }
}
int main(int argc, char *argv[])
{
        printf("Lotto main.. \n");
        calling_lotto_function();
        return 0;
}
