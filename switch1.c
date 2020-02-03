#include<stdio.h>
#include<stdlib.h>
void read(int[],int);
void display(int*,int);
void biggest_value(int*,int);
void smallest(int*,int);
void binary(int*,int);
main()
{
int arr[3]/*={11,12,13}*/;
int opt,i;
printf("select the option\n");
printf("1.read\t2.display\t3.biggest_value\t4.smallest\t5.binary\t6.polyndrome\n7.exit");
scanf("%d",&opt);
switch (opt)
{
case 1:read(arr,3);
	break;
case 2:display(arr,3);
	break;
case 3:biggest_value(arr,3);
	break;
case 4:smallest(arr,3);
	break;
case 5:binary(arr,3);
	break;
/*case 6:polyndrome(arr,3);
	break;
case 7:printf("terminating the application");
	exit(0);*/
default:printf("invalid option");
}
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
read(ptr,3);
int j=3;
for(i=0;i<j;i++)
printf("%p-%d\n",&ptr[i],ptr[i]);
}
void biggest_value(int*ptr,int i)
{
read(ptr,3);
int j=3,big;
big=&ptr[i];
for(i=0;i<j;i++)
{
if (ptr[i]>big);
	big=ptr[i];
}
printf("bigeest_value is:%d\n",big);
}
void smallest(int*ptr,int i)
{
read(ptr,3);
int j=3,small;
small=ptr[0];
for(i=0;i<j;i++)
{
if (ptr[i]<small);
small=ptr[i];
}
printf("smallest_value is:%d\n",small);
}
void binary(int*ptr,int i)
{
read(ptr,3);
int binary=0,base=1,rem,j=3;
for(i=0;i<j;i++)
{
rem=ptr[i]%2;
binary=binary+base*rem;
ptr[i]=ptr[i]/2;
base=base*10;
}
printf("binary value ptr[%d],%x",binary,binary);
}

