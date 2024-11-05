# include <stdio.h>

int main() {
    int i = 2024112431;
    printf("Value of i : %d and its address: %d", i, &i);

    int *ptr_i;
    ptr_i = &i;
    printf("\nValue of ptr_i : %u and value pointed by the pointer is : %d", ptr_i, *ptr_i); 

    return 0;
}
/* Value of i : 2024112431 and its address: -488315820
Value of ptr_i : 3806651476 and value pointed by the pointer is : 2024112431

=== Code Execution Successful ===*/
