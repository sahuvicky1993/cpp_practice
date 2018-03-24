#include<stdio.h>

char firstOcurrance(char*p)
{
int i;
char *a=calloc(sizeof(char),255);

for(i=0;p[i];i++){
a[p[i]]++;
if(a[p[i]]>=2)
return p[i];
}//for
}


main()
{

printf("%c\n",firstOcurrance("ADDBCBA"));


}
