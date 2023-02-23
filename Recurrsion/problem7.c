#include<stdio.h>
int main(){
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    int prime;
    for(int i=2; i<x; i++){

        if(x%i==0){

            prime=1;

        }
       // else{
         //   prime=0;
        //}
    }
    if(prime==1){
        printf("the number is not a prime number");
    }
    else{
        printf("the number is a prime number");
    }

}