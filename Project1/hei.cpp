#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

void hei(){
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt","w");
	fprintf(fp,"%s","½â");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt", "a");
	fprintf(fp, "%s", "°²");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt", "a");
	fprintf(fp, "%s", "Æ½");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt", "a");
	fprintf(fp, "%s", "\n");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt", "a");
	fprintf(fp, "%s", "ÎÒ");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt", "a");
	fprintf(fp, "%s", "°®");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);

	fp = fopen("C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt", "a");
	fprintf(fp, "%s", "Äã");
	fclose(fp);
	system("start C:\\Users\\Administrator\\Desktop\\ÎûÎû.txt");
	Sleep(500);
}
//void main(){
//
//	hei();
//	system("pause");
//}