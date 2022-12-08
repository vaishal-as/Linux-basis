#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,*bt,*wt,*tat;
    float avgwt,avgtat;
    for(i=1;i<=n;i++){
        printf("Entr the number of processes to execute:");
        scanf("%d",&bt[i]);
    }
    wt[1]=0;
    tat[1]=bt[1];
    for(i=1;i<=n;i++){
        wt[i]=wt[i-1]+bt[i-1];
        tat[1]=wt[i]+bt[i];
    }
    for(i=1;i<=n;i++){
        avgwt+=wt[i];
        avgtat+=tat[i];
    }
    printf("============================================================\n");
    printf("Process \t Brust Time \t Wating Time \t Turnaround Time\n");
    for (i=1;i<=n;i++){
        printf("Process%d\t%d\t%d\t%d\n",i,bt[i],wt[i],tat[i]);
    }
    printf("=============================================================\n");
    printf("The average wating time of all thr processes is:%.2f\n",avgwt/n);
    printf("The average turnaround time of all the process is:%.2f",avgtat/n);
    printf("==============================================================\n");
    printf("Gaant Chart\n");
    for(i=1;i<=n;i++){
        printf("%d\t||Process%d||\t%d\n",wt[i],i,tat[i]);
    }

}