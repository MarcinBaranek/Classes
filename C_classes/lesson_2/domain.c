#include "domain.h"

#include <stdio.h>

int are_coefficients_valid(const struct coefficients* coefficients)
{
    return coefficients->a;
}


void show(struct roots* roots)
{
    printf("left=%f + %f I\n", roots->first);
    printf("right=%f * %f I\n", roots->second);
}
