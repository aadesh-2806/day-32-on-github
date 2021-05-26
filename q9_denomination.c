#include<stdio.h>

void main()
{
	
	int i,t,j;
	
	printf("hello\nenter money =");
	scanf("%d",&i);
	
	t=i/100;
	printf(" denomination of 100= %d",t);
	
	i=i%100;
	t=i/50;
	printf(" denomination of 50= %d",t);
	
	i=i%50;
	t=i/10;
	printf(" denomination of 10= %d",t);
	
	i=i%10;
	t=i/5;
	printf(" denomination of 5= %d",t);
	
	i=i%5;
	t=i/2;
	printf(" denomination of 2= %d",t);
	
	i=i%2;
	t=i/1;
	printf(" denomination of 1= %d",t);
	
	
	getch();
	
}	
