#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void test1(){
	int i, a;
	scanf("%d",&a);
	for (int i = 2; i <= a/2; i++)
	{
		if (a%i == 0){
			printf("������������\n");
			return;
		}

	}
	printf("����������\n");
}
//��λȡ��
void test2(){

	int a, b;
	printf("please input a number: ");
	scanf("%d",&a);
	b = ~a;
	printf("result: %hd\n",b);
}
//�ֽڶ���Գ����Ӱ��
void test3(){

	struct  D
	{
	
		int a;
		char b;
		short c;
	};
	printf("����ǰ�� %d\n",sizeof(struct D));
	#pragma pack(1)
	struct  E
	{

		int a;
		char b;
		short c;
	};
	#pragma pack()
	printf("��1�ֽڶ���� %d\n", sizeof(struct E));
	typedef struct{
		short a : 9;
		short b : 9;
		short c : 9;

	}T_A;
	printf("λ�� %d\n",sizeof(T_A));

	typedef struct{
		char a : 3;
		int b : 4;
	

	}T_B;
	printf("λ��2�� %d\n", sizeof(T_B));
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

