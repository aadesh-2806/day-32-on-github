#include<stdio.h>
#include<math.h>
void main()
{
	
	int i,j,m,l,im,iw,lm;
	float s;
	
	printf("hello\n");
	j=80000;
	
	m=0.52*j;
	lm=0.35*j;
	l=0.48*j;
	
	im=m-lm;
	iw=(j-m)-(l-lm);
	
	printf("men=%d\n",m);
	printf("literate men=%d\n",lm);
	printf("literate persons=%d\n",m);
	printf("illiterate men=%d\n",im);
	printf("illiterate women=%d\n",iw);
	
	getch();
	
}	
