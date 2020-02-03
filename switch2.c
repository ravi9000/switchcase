#include<stdio.h>
void read(int*,int);
void display(int[],int);
main()
{
int arr[3];
read(arr,3);
display(arr,3);
}
void read(int*ptr,int i)
{
int j=3;
for(i=0;i,i<j;i++)
{
scanf("%d",&ptr[i]);
}
}
void display(int*ptr,int i)
{
int j=3;
for(i=0;i<j;i++)
printf("%p-%d\n",&ptr[i],ptr[i]);
}
