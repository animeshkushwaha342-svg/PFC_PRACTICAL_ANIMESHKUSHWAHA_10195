#include <stdio.h>
int sumOfDigits(int n){
    //Animesh kushwaha_10195
    int sum =0;
    while (n!=0) {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumOfDigits(n));
    return 0;
}
//output
//Enter a number: 67456
//Sum of digits = 28