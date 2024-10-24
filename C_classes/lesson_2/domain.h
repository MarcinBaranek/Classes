#ifndef DOMAIN_H
#define DOMAIN_H
#include <complex.h>


struct roots
{
    double complex first;
    double complex second;
};

struct coefficients
{
    double complex a;
    double complex b;
    double complex c;
};

void show(struct roots* roots);

int are_coefficients_valid(const struct coefficients* coefficients);
#endif //DOMAIN_H
