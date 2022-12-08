#include<stdio.h>
int main(){
    int a;
    printf("Enter the age of the person: ");
    scanf("%d",&a);
    if(a<12){
        printf("He/she is adult");
    }
    else if(a>=12 && a<=18){
        printf("He/she is a teenager");
    }
    else if(a>18){
        printf("He/she is a adult");
    }
}