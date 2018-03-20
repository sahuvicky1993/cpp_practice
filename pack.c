#include<stdio.h>
typedef unsigned char U8;
typedef unsigned short int U16;
typedef unsigned  int U32;


U32 pack(U16 id,U8 age,U8 gen,U8 ms,U8 it)
{
	U8 temp=0;
	if(gen)
		temp|=1;
	if(ms)
		temp|=1<<1;
	temp|=1<<(it+2); 

	return (U32)((U32)id<<16 | (U32) age<<8 | temp);
}

void unpack(U32 data){
	 U16 id=0;U8 age=0;U8 gen=0;U8 ms=0;U8 it=0;
	 //U8 c=0;
	id=(data>>16)& 0xffff;
	age=(data>>8)& 0x00ff;
	gen=data&1;

	if(data&(1<<1))
		ms=1;
	U8 temp=(data)&0x000000ff;
	temp=temp>>2;
	while(temp){
	temp>>=1;
	it++;
	}
	printf("%u %hu %hu %hu %hu\n",id,age,gen,ms,it);

}

main(){

	U32 data;
printf("%u\n",data=pack(6545,24,1,1,3));
//printf("%d\n",pack(id,age,gen,ms,it));

unpack(data);


}


