#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(int argc,char *argv[]) {
	FILE* fp = fopen(argv[1], "w+");
	//for (int i = 0; i < argc; ++i)//���ݶ��ٲ���
	//{
	//	printf("%d %s\n", i,argv[i]);
	//}

	if (fp == NULL)
	{
		perror("fopen");
	}


	//fputc('h', fp);//д�뵥һ�ַ�
	//printf("%c", fgetc(fp));//��ȡ��һ�ַ�







	fclose(fp);
	return 0;
}