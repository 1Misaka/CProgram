#define _CRT_SECURE_NO_WARNINGS
//strlen() 读取字符串长度
//strcpy() 读取内容到指定数组
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