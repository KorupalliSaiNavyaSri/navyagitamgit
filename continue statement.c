#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 25; i++) {
        // If the number is even, skip the rest of the loop and continue with the next iteration
        if (i % 2 == 0) 
            continue;
        
        // This will only print odd numbers
        printf("%d\n", i);
    }
    return 0;
}
/*1
3
5
7
9
11
13
15
17
19
21
23
25


=== Code Execution Successful ===*/
