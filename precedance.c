#include <stdio.h>

int main() {
    int a = 24, b = 21, c;
    c = a + b * 3;
    printf("Value of c = %d\n", c);
    
    c = a / b * 4;
    printf("Value of c = %d\n", c);
    
    c = 3 % b * a;
    printf("Value of c = %d\n", c);

    return 0;
}
/*Value of c = 87
Value of c = 4
Value of c = 72*/

