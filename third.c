#include <stdlib.h>
#include <stdio.h>

void    find_prime_factors(int n)
{
    int i;
    int *ary;
    int index;

    i = 2;
    index = 0;
    ary =(int *)malloc(sizeof(*ary) * index);

    while (i * i <= n)
    {
        if ( n % i == 0)
        {
            ary[index] = i;
            i++;
            index++;
        }
        else
        {
            i++;
        }
    }
    int j;
    j = 0;
    while ( j <= index)
    {
        printf("%d ", index);
        j++;
    }
}

int main(int argc, char **argv)
{
    
}
