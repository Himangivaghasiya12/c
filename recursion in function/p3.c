//using function  calling array

#include<stdio.h>

int array()

{
	int a[10],i,sum=0;

	for(i=0; i < 10; i++)
	{

		printf("enter value [%d] : ",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0; i < 10; i++)
	{
		sum+=a[i];
	}

	printf("sum is : %d ", sum);

	return 0;
}
int main()
{
    array();
}

/*
enter value [1] : 2
enter value [2] : 2
enter value [3] : 2
enter value [4] : 3
enter value [5] : 4
enter value [6] : 5
enter value [7] : 6
enter value [8] : 7
enter value [9] : 8
enter value [10] : 9
sum is : 48
*/
