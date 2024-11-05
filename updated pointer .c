# include <stdio.h>

int main() {
    int i = 2024112431;
    printf("Value of i : %d and its address: %u", i, &i);

    int *ptr_i;
    ptr_i = &i;
    printf("\nValue of ptr_i : %u and value pointed by the pointer is : %d", ptr_i, *ptr_i); 

    return 0;
}
