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



# include <stdio.h>

int main() {
    int num=202411;
    int*ptr=&num;
    
    printf("address of num=%u\n",&num);
    printf("value   of ptr=%u\n",ptr);
   
    printf("address of ptr=%u\n",&ptr);
    printf( "num=%d\n",*(&num));
     printf( "num=%d\n",*(ptr));
      printf( "num=%d\n",num);
    
    return 0;
}
/*address of num=1737697916
value   of ptr=1737697916
address of ptr=1737697904
num=202411
num=202411
num=202411


=== Code Execution Successful ===*/
