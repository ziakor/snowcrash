#include <stdio.h>
int main(int argc, char **argv)
{
        int i = 0;
        while (argv[1][i] != 0)
        {
                printf("%c", argv[1][i] - i);
                i++;
        }
        printf("\n");
        return(0);
}
