#include<stdio.h>
#include<math.h>
void main()
{
	
	int i,j1,j2,j3,j4;
	float s;
	
	printf("hello\nenter  x1=");
	scanf("%d",&j1);
	
	printf("enter y1=");
	scanf("%d",&j2);
	
	printf("enter x2=");
	scanf("%d",&j3);
	
	printf("enter y2=");
	scanf("%d",&j4);
	
	
	s=(j3-j1)*(j3-j1)+(j4-j2)*(j4-j2);
	s=pow(s,0.5);
	printf(" dist of pt= %f",s);
	
	getch();
	
}	
