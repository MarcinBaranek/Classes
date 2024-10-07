#include <assert.h>
#include "is_prime.h"


int test_is_prime(){
    assert(is_prime(3));
    assert(!is_prime(2));
    assert(is_prime(7));
    assert(!is_prime(12412543));
    assert(is_prime(104729));
    return 0;
}
