#include <stdio.h>

int main() {
    unsigned short int num = 65538;
    printf("size of the unsigned short int=%d\n", sizeof(num));
    printf("Value =%d",num);
    
    return 0;
    
}
/*/tmp/FxhiR0630g.c: In function 'main':
/tmp/FxhiR0630g.c:5:30: warning: unsigned conversion from 'int' to 'short unsigned int' changes value from '65538' to '2' [-Woverflow]
    5 |     unsigned short int num = 65538;
      |                              ^~~~~
/tmp/FxhiR0630g.o
size of the unsigned short int=2
Value =2

=== Code Execution Successful ===*/
