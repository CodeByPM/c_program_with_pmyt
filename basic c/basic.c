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

// #include <stdio.h>

// int main() {
//     int num;

//     printf("Please enter your number: ");
//      scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("Even number: %d", num);
//     }
//     else {
//         printf("Odd number: %d", num);
//     }

//     return 0;
// }

// // structure and union
#include<stdio.h>
struct employee{
    int id;
    char name[50];
    float salary;1
};
int main (){
    struct  employee e[5];
    printf("enter your 5 employess\n");
    printf("\n employee 1(id name salary):");
    scanf("%d %49s %f",&e[0].id,e[0].name,&e[0].salary);
     printf("\n employee 2(id name salary):");
    scanf("%d %49s %f",&e[1].id,e[1].name,&e[1].salary);
     printf("\n employee 2(id name salary):");
    scanf("%d %49s %f",&e[2].id,e[2].name,&e[2].salary);
     printf("\n employee 3(id name salary):");
    scanf("%d %49s %f",&e[3].id,e[3].name,&e[3].salary);
     printf("\n employee 4(id name salary):");
    scanf("%d %49s %f",&e[4].id,e[4].name,&e[4].salary);
     
    printf("\n -- emloyee details--\n");
    printf("%d %s %.2f\n",e[0].id,e[0].name,e[0].salary);

    printf("%d %s %.2f\n",e[1].id,e[1].name,e[1].salary);
    printf("%d %s %.2f\n",e[2].id,e[2].name,e[2].salary);
    printf("%d %s %.2f\n",e[3].id,e[3].name,e[3].salary);
    printf("%d %s %.2f\n",e[4].id,e[4].name,e[4].salary);
    return 0;
}