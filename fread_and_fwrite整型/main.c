#define _CRT_SECURE_NO_WARNINGS
//strlen() ��ȡ�ַ�������
//strcpy() ��ȡ���ݵ�ָ������
//fseek()
#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) {
	FILE* fp = fopen("new.txt", "r+");
	if (fp == NULL)
	{
		perror("fopen");
	}
	int i = 10;
	fwrite(&i, sizeof(int), 1, fp);
	fclose(fp);
	


}