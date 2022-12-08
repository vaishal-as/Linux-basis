#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the base value:");
    scanf("%d",&a);
    printf("Enter the top value:");
    scanf("%d",&b);
    printf("Enter the height:");
    scanf("%d",&c);
    d=((a+b)*c)/2;
    printf("The area of the trapezium is: %d",d);
}