/*
**  Created by L. Y. Kuo
**  Sep. 13, 2017
**
**  Consecutive integer checking algorithm for computing gcd(m, n)
**
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Please enter 2 integers!\n");
        return (0);
    }
    int m;
    int n;
    int t;

    m = atoi(argv[1]);
    n = atoi(argv[2]);
    if (m - n > 0)
    {
        t = n;
        if (t == 0)
        {
            printf("The GCD is %d\n", m);
            return (m);
        }
    }
    else if (m - n == 0)
    {
        printf("Please enter 2 not-both-zero integers!\n");
        return (0);
    }
    else
    {
        t = m;
        if (t == 0)
        {
            printf("The GCD is %d\n", n);
            return (m);
        }
    }

    while (t > 0)
    {
        if ((m % t == 0) && ( n % t == 0))
        {
            printf("The GCD is %d\n", t);
            return (0);
        }
        else
        {
            t--;
        }
    }
    return (0);

}
