/*
1 
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>

void WPattern()
{
    int i=1,j,k=1;

	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d ",k%2==1);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}

}

int main()
{
    WPattern();

    return 0;
}