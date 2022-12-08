#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to check:");
    scanf("%d",&a);
    if( a%3==0 && a%5==0){
        printf("Dingdong");
    }
    else if(a%5==0 || a%3==0){
        printf("Ding");
    }
    else{
        printf("%d\n",a);
    }
}
