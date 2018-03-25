#include<stdio.h>

main(){

	int num=2863311530;//Binay representation is 101010....10
	/* after arrangement num should be like 11111.....00000 */
	/* which represent integer 4294901760 */
	int temp=0,j=16,k=0,i;
	for(i=0;i<32;i++)
	{
		if(i%2 && (num&(1<<i))){
			temp |=1<<j;
			j++;
		}
		else
		{
			if(num&(1<<i))
				temp |=1<<k;
			k++;
		}
	}

	printf("%u\n",temp);
}


