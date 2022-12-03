
#include "lib.h"

bool number_is_prime(int a)
{
    int i = 2;
    return check(a, i);
}

bool check(int a, int i)
{
    if (a % i == 0)
    {
        if (a == i)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    check(a, i + 1);
}