/*
**  Created by L. Y. Kuo
**
**  Euclid’s algorithm for computing gcd(m, n)
**  gcd(60, 24) = gcd(24, 12) = gcd(12, 0) = 12.
**
**
*/

#include <stdlib.h>
#include <stdio.h>

int euclid(int m, int n)
{

    if ( n == 0)
    {
        printf("%d is the GCD.\n", m);
        return (m);
    }

    else
    {
        int r;
        r = m % n;
        return euclid(n, r);
    }

}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Please enter two non-negative and not-both-zero integers.\n");
        return (0);
    }

    int m = atoi(argv[1]);
    int n = atoi(argv[2]);

    if ( m - n == 0)
    {
        printf("Please enter two non-negative and not-both-zero integers.\n");
        return (0);
    }
    else
    {
        euclid(m, n);
        return (0);
    }
}
