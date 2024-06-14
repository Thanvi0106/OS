#include<stdio.h>
void main(){ 
int n,m[20],i,j,sb[20],b[20][20],x; 
printf("\t\tIndexed file allocation algorithm");
printf("\nenter no of files");
scanf("%d",&n);
for(i = 0; i < n; i++){
printf("\n enter index block of file %d", i + 1);
scanf("%d",&sb[i]);
printf("\n enter length of file %d",i+1); 
scanf("%d",&m[i]);
printf("\n enter blocks of file %d",i+1);
for(j=0;j<m[i];j++){
scanf("%d",&b[i][j]); 
        }
    }
printf("\n file\tindex\tlength\n");
for(i=0;i<n;i++){
printf("%d\t%d\t%d\n",i+1,sb[i],m[i]);
    }
printf("\n enter file name");
scanf("%d",&x);
printf("\n file name is %d",x); 
printf("\n blocks occupied are:");
for(j=0;j<m[x - 1];j++) 
printf("%4d",b[x-1][j]);
}
