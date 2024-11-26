// Opeators in C
#include <stdio.h>

int main() {
    int a = 24, b= 25;
    
    // Arithmetic Operataors
    printf("Arithmetic Operataors\n");
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, (a/b));
    printf("%d %% %d = %d\n\n", a, b, a%b);
    
    // Relational Operators
    printf("Relational Operataors\n");
    printf("%d < %d = %d\n", a, b, a<b);
    printf("%d > %d = %d\n", a, b, a>b);
    printf("%d == %d = %d\n", a, b, a==b);
    printf("%d != %d = %d\n\n", a, b, a!=b);

    // Logical Operators
    printf("Logical Operataors\n");
    printf("AND %d && %d = %d\n", a, b, a && b);
    printf("OR %d || %d = %d\n", a, b, a || b);
    printf("NOT %d = %d\n\n", a, !a);
    
    // Bitwise Operators
    printf("Bitwise Operataors\n");
    printf("%d & %d = %d\n", a, b, a&b);
    printf("%d | %d = %d\n", a, b, a|b);
    printf("Bitwise XOR %d ^ %d = %d\n", a, b, a^b);
    printf("Left Shift %d << 2 = %d\n", a, a<<2);
    printf("Right Shift %d >> 2 = %d\n", a, a>>2);
    
    //Conditional Operator - Ternary operator
    
    (a < b) ? printf("\na is greater than b"): printf("\nb is less than a");
    
    return 0;
}
/*Arithmetic Operataors
24 + 25 = 49
24 - 25 = -1
24 * 25 = 600
24 / 25 = 0
24 % 25 = 24

Relational Operataors
24 < 25 = 1
24 > 25 = 0
24 == 25 = 0
24 != 25 = 1

Logical Operataors
AND 24 && 25 = 1
OR 24 || 25 = 1
NOT 24 = 0

Bitwise Operataors
24 & 25 = 24
24 | 25 = 25
Bitwise XOR 24 ^ 25 = 1
Left Shift 24 << 2 = 96
Right Shift 24 >> 2 = 6

a is greater than b

=== Code Execution Successful ===*/
