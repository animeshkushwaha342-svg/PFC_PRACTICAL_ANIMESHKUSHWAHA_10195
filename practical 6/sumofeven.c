#include <stdio.h>
int main() {
    //Animesh kushwaha_10195
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;  
        }
        sum = sum + i;
    }
    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}
//output 
//Enter the value of n: 14
//Sum of even numbers from 1 to 14 is: 56
