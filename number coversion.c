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

    /*printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x\n", num); */

    return 0;
}
/*Enter a number: 444
Enter the base: 23
The number 444 in base 23 is: 197*/