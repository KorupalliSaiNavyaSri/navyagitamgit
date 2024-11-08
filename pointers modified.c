# include <stdio.h>

int main() {
    int num=22;
    int*ptr=&num;
    
    printf("address of num=%u\n",&num);
    printf("value   of ptr=%u\n",ptr);
   
    printf("address of ptr=%u\n",&ptr);
    printf( "num=%u\n",num);
     printf( "num=%u\n",*ptr);
    return 0;
}
/*/tmp/01eRLO8h18.o
address of num=1739762428
value   of ptr=1739762428
address of ptr=1739762416
num=22
num=22


=== Code Execution Successful ===*/
