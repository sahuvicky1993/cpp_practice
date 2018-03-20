#include<stdio.h>
#include<limits.h>

main(){

	char a[32],b[32];
	int i,j=0,k=16;
	for(i=0;i<=31;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	int f=a[0],s=INT_MAX,t=INT_MAX;
	for(i=1;i<=31;i++){
	if(a[i]<f)
		{
			t=s;
			s=f;
			f=a[i];
		}
	else if(a[i]<s)
		{
			t=s;
			s=a[i];
		}
	 else if(a[i]<t)
                {
                        t=a[i];
                }


	}


        printf("%d %d %d \n",f,s,t);

}


