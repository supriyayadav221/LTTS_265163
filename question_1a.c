#include <stdio.h>

typedef struct complex_t {

float real;

float imaginary;

} complex_t;

complex_t add(complex_t a, complex_t b);

complex_t subtract(complex_t a, complex_t b);

complex_t multiply(complex_t a, complex_t b);

complex_t division(complex_t a, complex_t b);
int main()
{
complex_t n1,n2,add_result,subtract_result,division_result, multiplication_result;
n1.real=5;
n1.imaginary=10;
n2.real=56;
n2.imaginary=78;

add_result=add(n1,n2);
printf("Sum = %.1f + %.1fi", add_result.real, add_result.imaginary);



}

complex_t add(complex_t a, complex_t b)
{
    complex_t temp;
    temp.real = a.real + b.real;
    temp.imaginary=a.imaginary+ b.imaginary;
    return temp;
}