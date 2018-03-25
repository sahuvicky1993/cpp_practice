#include<stdio.h>

static int count;
char* find_ocur(char*p,char ch){
	static char*q=NULL;
	if(*p)
	{
		if(*p==ch){
			count++;
			q=p;
		}
		return find_ocur(p+1,ch);

	}
	else
		return q;


}
main(){

	char s[]="VivekKumarSahu";
	/* Find last ocurrance of 'a' in the given string*/
	/* Also prnt no of time 'a' present in the string */

	char*ret=find_ocur(s,'a');

	printf("last occurance:%s and no of times %c is present is:%d\n",ret==NULL?"NULL":ret,'a',count);


}





