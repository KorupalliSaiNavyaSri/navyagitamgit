#include <stdio.h>
#include <complex.h>

int main() {
    // Declare complex numbers
    double complex z1 = 1.0 + 5.0*I;
    double complex z2 = 2.0 - 1.0*I;
    
    // Perform operations
    double complex sum = z1 + z2;
    double complex product = z1 * z2;
    double complex division = z1 / z2;
    
    // Print real and imaginary parts of the result
    printf("z1: %.2f + %.2fi\n", creal(z1), cimag(z1));
    printf("z2: %.2f + %.2fi\n", creal(z2), cimag(z2));
    printf("Sum: %.2f + %.2fi\n", creal(sum), cimag(sum));
    printf("Product: %.2f + %.2fi\n", creal(product), cimag(product));
    printf("Division: %.2f + %.2fi\n", creal(division), cimag(division));

    return 0;
}

/*z1: 1.00 + 5.00i
z2: 2.00 + -1.00i
Sum: 3.00 + 4.00i
Product: 7.00 + 9.00i
Division: -0.60 + 2.20i


=== Code Execution Successful ===*/
