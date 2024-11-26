
# include <stdio.h>
# define SIZE 7
int main() {
    int arr[SIZE] = {20, 24, 11, 24, 31, 25, 28};
    
    printf("Original array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
/*Original array: 
20 24 11 24 31 25 28 
Sorted array: 
11 20 24 24 25 28 31 */
