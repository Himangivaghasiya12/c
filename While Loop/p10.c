/*

A=a      B=b     C=c     D=d     E=e     F=f     G=g     H=h     I=i     J=j     K=k     L=l     M=m  N=n      O=o     P=p     Q=q     R=r     S=s     T=t     U=u     V=v     W=w     X=x     Y=y     Z=z

*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int a=65;

    	while(a<=90)
	{
		printf("%c=%c\t ",a,a+32);
		a++;
	}

	return 0;
}