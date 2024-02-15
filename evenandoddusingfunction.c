// Even or Odd by calling user defined fxn through if statement.

#include<stdio.h>
int evenodd(int x){
    if(x%2==0){
        printf("%d is Even ",x);
    }
    if(x%2!=0){
        printf("%d is Odd ",x);
    }

}
int main(){
    int x;
    printf("Enter x :");
    scanf("%d",&x);
    evenodd(x);
}

// #include<stdio.h>
// int evenodd(int x);

// int main(){
//     int x;
//     printf("Enter x :");
//     scanf("%d",&x);
//      if(x%2==0){
//         printf("%d is Even ",x);
//     }
//     if(x%2!=0){
//         printf("%d is odd ",x);
//     }

// }
// int evenodd(int x){
//     if(x%2==0){
//         printf("%d is Even ",x);
//     }
//     if(x%2!=0){
//         printf("%d is odd ",x);
//     }
    
// }
