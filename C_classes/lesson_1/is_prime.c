#include <math.h>
#include <stdbool.h>

bool is_prime(const int number)
{
    if (number <= 2) return false;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (!(number % i)) return false;
    }
    return true;
}
