#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(int argc,char *argv[]) {
	FILE* fp = fopen(argv[1], "w+");
	//for (int i = 0; i < argc; ++i)//传递多少参数
	//{
	//	printf("%d %s\n", i,argv[i]);
	//}

	if (fp == NULL)
	{
		perror("fopen");
	}


	//fputc('h', fp);//写入单一字符
	//printf("%c", fgetc(fp));//读取单一字符







	fclose(fp);
	return 0;
}