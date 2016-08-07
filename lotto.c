#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
=======
// mainline commens.. but hotfix3
>>>>>>> hotfix3
void    calling_new_feature ( void )
{
        printf("new feature .. \n");
}
void    calling_lotto_function (void)
{

        for ( int i = 0 ; i < 10 ; i++)
        {
            printf("[%2d] = %d\n", i, random());
        }
}
int main(int argc, char *argv[])
{
        printf("Lotto main.. \n");
        calling_lotto_function();
        calling_new_feature();
        return 0;
}
