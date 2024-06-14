#include<stdio.h>

void main(){
    int i,j,m,size,val[10][10],badd[20],limit[20],ladd;
    printf("\n\t\tSegmentation");
    printf("\n Enter the size of the segment table:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\n enter info about segment %d",i+1);
        printf("\n enter base address:");
        scanf("%d",&badd[i]);
        printf("\n Enter the limit:");
        scanf("%d",&limit[i]);
        for(j=0;j<limit[i];j++)
        {
            printf("\n enter value at address %d:",badd[i]+j);
            scanf("%d",&val[i][j]);
        }
    }
    printf("\n\n****SEGMENT TABLE****");
    printf("\nseg.no\tbase\tlimit\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t%d\t%d\n",i+1,badd[i],limit[i]);
    }
    printf("\n Enter segment no.::");
    scanf("%d",&i);
    if(i>=size || i<0)
    {
        printf("Invalid segment number");
    }
    else
    {
        printf("\n enter the logical address:");
        scanf("%d",&ladd);
        if(ladd>=limit[i] || ladd<0)
            printf("Invalid logical address");
        else
        {
            m=badd[i]+ladd;
            printf("\nmapped physical address is=%d",m);
            printf("\n the value is %d",val[i][ladd]);
        }
    }
}

