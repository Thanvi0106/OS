#include<stdio.h>
#include<unistd.h>
int main()
{
int pipefds1[2],pipefds2[2];
int returnstatus1,returnstatus2;
int pid;
char pipe1 writemessage[20]="Hii";
char pipe2 writemessage[20]="Hello";
char readmessage[20];
returnstatus1=pipe(pipefds1);
if(returnstatus1==-1)
{
printf("unable to create pipe1\n");
return 1;
}
returnstatus2=pipe(pipefds2);
if(returnstatus2==-1)
{
printf("unable to create pipe2\n");
return 1;
}
pid=fork;
if(pid!=0)
{
close(pipefds1[0]);
close(pipefds2[1]);
printf("In parent writing to pipe1-message is %s\n",pipe1 widemessage);
write(pipefds1[1],pipe1 writemessage,size of(pipe1 writemessage));
read(pipefds2[0],readmessage,size of(readmessage);
printf("In parent reading from pipe-2message is %s\n",readmessage),
}
else
{
close(pipefds1[1]);
