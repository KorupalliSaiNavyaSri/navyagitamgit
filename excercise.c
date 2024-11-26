#include <stdio.h>
#include <math.h>

int digits (int x){
    int count = 0;
    while (x >0){
        count++;
        x=x/10;
    }
    return count;
}


int main() {
    int x = 123456;
    int low_end =0, r=0;
    
    int number_of_digits = digits(x);
    printf("x = %d, Number of digits = %d\n", x, number_of_digits);
    for (int i=0; i< number_of_digits/2; i++){
        r = x%10;
        low_end = low_end + r*pow(10,i);
        x = x/10;
    }
    
    printf("Low end = %d high end = %d",low_end,x);
    return 0;
}

/*x = 2024112431, Number of digits = 10
Low end = 12431 high end = 20241

=== Code Execution Successful ===*/
