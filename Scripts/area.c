#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the base1:");
	scanf("%d",&a);
	printf("Enter the base2:");
	scanf("%d",&b);
	printf("Enter the height:");
	scanf("%d",&c);
	d=((a+b)*c)/2;
	printf("The area of the trapizum:%d\n",d);
}
