#include<stdio.h>
int main(){
	int a;
	printf("Enter the age of the person:");
	scanf("%d",&a);
	if(a<12){
		printf("He is a child");
	}
	else if(a>=12 && a<=18){
		printf("He is a Teenager");
	}
	else if(a>18){
		printf("He is a adult");
	}
}
