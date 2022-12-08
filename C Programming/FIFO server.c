#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/type.h>
#include<sys/stat.h>
int main(){
    int fd;
    //FIFO path
    char* myfifo="/tmp/myfifo";
    // creating the named file FIFO
    //mkfifo(<pathname>,<filename>)
    mkfifo(myfifo,0666);
    char arr1[80],arr2[80];
    while(1){
        //open FIFO for write only
        fd=open(myfifo,O_WRONGLY);
        //take an input arr2ing from user
        // 80 is maximum length
        fgets(arr2,80,stdin);
        //write the input in arr2ing on FIFO and close it
        write(fd,arr2,strlen(arr2)+1);
        close(fd);
        //open FIFO for read only
        fd=open(myfifo,O_RDONLY);
        //read from fifo
        read(fd,arr1,sizeof(arr1));
        //print the read message
        printf("USER1:%s\n",arr1);
        close(fd);
    }
    return 0;
}
