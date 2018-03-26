#include<stdio.h>
#include<pthread.h>

void thread1(char* num);
void thread2(char* num);
int setBits(char num,int flag ){
	int c=0,i;
	printf("num=%d\n",num);

	for(i=0;i<=7;i++){
	printf("i=%d c=%d\n",i,c);
		if(num&(1<<i))
			c++;
	}	
		if(flag==1)
	       usleep(0.1);
	printf("c=%d\n",c);
	return c;
}

main()
{
	pthread_t pid1,pid2;
	pthread_create(&pid1,0,&thread1,(char*)43);
	pthread_create(&pid2,0,&thread2,(char*)44);

//	pthread_join(pid1,0);
//	pthread_join(pid2,0);
}

void thread1(char* num){
	printf("thread Id:%u no o set bits=%d\n",pthread_self(),setBits((char*)num,0));
}

void thread2(char* num){
	printf("thread Id:%u no o set bits=%d\n",pthread_self(),setBits((char*)num,1));}

