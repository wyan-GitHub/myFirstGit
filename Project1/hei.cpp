#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

void hei(){
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt","w");
	fprintf(fp,"%s","��");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt", "a");
	fprintf(fp, "%s", "��");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt", "a");
	fprintf(fp, "%s", "ƽ");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt", "a");
	fprintf(fp, "%s", "\n");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt", "a");
	fprintf(fp, "%s", "��");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt", "a");
	fprintf(fp, "%s", "��");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\����.txt", "a");
	fprintf(fp, "%s", "��");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\����.txt");
	Sleep(500);
}
//void main(){
//
//	hei();
//	system("pause");
//}