#include <stdio.h>

int main() {
    int num, base, temp, i=-1, length;
    int new_number[10];
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num; //make a copy of the original num
    printf("Enter the base: ");
    scanf("%d", &base);
    while (temp > 0) {
        new_number[++i] = temp % base;
        temp = temp/base;
    }
    length=i;
    printf("The number %d in base %d is: ", num, base);
    for(i=length; i>=0; i--)
        printf("%d", new_number[i]);
    printf("\n");

   
    return 0;
}
/*/tmp/DiWoKsUN96.o
Enter a number: 23
Enter the base: 5
The number 23 in base 5 is: 43


=== Code Execution Successful ===*/
