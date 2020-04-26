#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void test1(){
	int i, a;
	scanf("%d",&a);
	for (int i = 2; i <= a/2; i++)
	{
		if (a%i == 0){
			printf("此数不是素数\n");
			return;
		}

	}
	printf("此数是素数\n");
}
//按位取反
void test2(){

	int a, b;
	printf("please input a number: ");
	scanf("%d",&a);
	b = ~a;
	printf("result: %hd\n",b);
}
//字节对齐对程序的影响
void test3(){

	struct  D
	{
	
		int a;
		char b;
		short c;
	};
	printf("处理前： %d\n",sizeof(struct D));
	#pragma pack(1)
	struct  E
	{

		int a;
		char b;
		short c;
	};
	#pragma pack()
	printf("按1字节对齐后： %d\n", sizeof(struct E));
	typedef struct{
		short a : 9;
		short b : 9;
		short c : 9;

	}T_A;
	printf("位域： %d\n",sizeof(T_A));

	typedef struct{
		char a : 3;
		int b : 4;
	

	}T_B;
	printf("位域2： %d\n", sizeof(T_B));
}
void test4(){

	char a[] = "hello";
	char b[] = "hello";
	if (strcmp(a,b)==0)
	{
		printf("true \n");
		puts(a);
		printf("%d,%d\n",sizeof(b),strlen(b));
	}
	else{
		printf("false \n");
	}
}
void test5(){
	printf("haha");
}

