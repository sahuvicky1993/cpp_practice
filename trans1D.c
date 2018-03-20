#include<stdio.h>
#include<limits.h>

main(){

	char a[9],b[9];
	int i,j=3,k,l=0;
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(k=0;k<3;k++)
	{
	i=k;
		while(j--){
		b[l++]=a[i];i+=3;
		}
		j=3;

	}

	for(i=0;i<=9;i++)
		printf("%d ",b[i]);
	printf("\n");

}
