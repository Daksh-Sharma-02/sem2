// Even or Odd by calling user defined fxn through if statement.

#include<stdio.h>
#include<stdbool.h>
bool evenodd(int x){
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);

    if(evenodd(x)){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

}
