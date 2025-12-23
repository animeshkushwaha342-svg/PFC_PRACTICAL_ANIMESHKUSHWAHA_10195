#include <stdio.h>
void swap(int*a,int*b){
    //Animeshkushwaha_10195
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
int main() {
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Before swapping:x=%d,y=%d\n",x,y);
    swap(&x, &y); 
    printf("After swapping: x=%d, y=%d\n",x,y);
    return 0;
}
//output
//Enter two numbers:
//5 7
//Before swapping:x=5,y=7
//After swapping: x=7, y=5
