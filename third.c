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
int    *find_prime_factors(int n)
{
    int i;
    int *ary;
    int index;

    i = 2;
    index = 0;
    ary =(int *)malloc(sizeof(*ary) * index);
    int stop = n;

    while (i <= stop)
    {
        if ( n % i == 0)
        {
            ary[index] = i;
            //printf("%d ", i);
            n = n / i;

            index++;
        }
        else
        {
            i++;
        }
    }
   // printf("index is : %d\n", index);

    // int j;
    // j = 0;
    // while ( j < index)
    // {

    //     printf("%d ", ary[j]);
    //     j++;
    // }
    return(ary);
}

int main(int argc, char **argv)
{
    
}
