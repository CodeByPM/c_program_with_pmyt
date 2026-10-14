// #include<stdio.h>
// int main(){
//     // sum of two number
//     int a, b;
//     printf("enter your a and b number");
//     scanf("%d %d",&a,&b);
//     int c=a+b;
//     printf("sum of : %d",c);
// }

// even number print

#include <stdio.h>

int main() {
    int num;

    printf("Please enter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even number: %d", num);
    }
    else {
        printf("Odd number: %d", num);
    }

    return 0;
}
