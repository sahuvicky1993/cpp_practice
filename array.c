#include<stdio.h>

main(){

	int a[32],b[32];
	int i,j=0,k=16;
	for(i=0;i<=31;i++)
		printf("%d ",a[i]);

	printf("\n");

	for(i=0;i<=31;i++)
	{
		if(i%2)
			b[j++]=a[i];
		else
			b[k++]=a[i];
	}

	for(i=0;i<=31;i++)
		printf("%d ",b[i]);
	printf("\n");

}


