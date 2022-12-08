#include<stdio.h>
#include<string.h>
int main(){
    char str[20][50],str1[50];
    int a,n,i,found=0;
    printf("Enter the total number of entries:");
    scanf("%d",&n);
    i=0;
    while(i<n){
        printf("Enter the name in the list:");
        scanf("%s",str[i]);
        i++;
    }
    printf("Enter the name you want to search:");
    scanf("%s",str1);
    i=0;
    while(i<n){
        a=strcmp(str1,str[i]);
        if(a==0){
            printf("The name you entered is present in the list at index:%d",i+1);
            break
        }
        else if(a!=0 && i==(n-1)){
            printf("The name you entered is not present in the list");
            break
        }
        i++;
    }
}
