#ifndef TOOLS_C
#define TOOLS_C

#include <stdio.h>
#include <math.h>

/**
 * struct complex - struct to number complex.
 * @re: real number.
 * @im: imaginary nymber.
 */
typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);

complex conjugate(complex c);

double modulus(complex c);

double argument(complex c);

void addition(complex c1, complex c2, complex *c3);

void substraction(complex c1, complex c2, complex *c3);

void multiplication(complex c1, complex c2, complex *c3);

void division(complex c1, complex c2, complex *c3);

#endif /* TOOLS_C */
