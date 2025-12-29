#include <stdio.h>

int main(){
    //Animesh kushwaha_10195
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nReversed array: ");
    for(int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1; i<n;i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    int sum_even = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] % 2 == 0) {
            sum_even += arr[i];
        }
    }
    printf("\nSum of all even elements: %d\n", sum_even);

    return 0;
}
//output 
//Enter the number of elements in the array: 1 2 3 4 6 7 9 0
//Enter 1 elements:

//Reversed array: 2 
//Maximum element: 2
//Minimum element: 2
//Sum of all even elements: 2
