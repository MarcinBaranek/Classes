#include <assert.h>

#include "domain.h"
#include <complex.h>

#include "quadratic_equation_solver.h"


int test_quadratic_solver(){
    const struct coefficients test_case_1 = {1, -4, 3};
    struct roots result;
    solve_quadratic_equation(&test_case_1, &result);
    assert(result.first == 1);
    assert(result.second == 3);
    show(&result);
    return 0;
}
