#define _CRT_SECURE_NO_WARNINGS
    //strlen() ��ȡ�ַ�������
	//strcpy() ��ȡ���ݵ�ָ������
//fseek()
#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) {

	FILE* fp = fopen("new.txt", "r");
	if (fp == NULL)
	{
		perror("fopen");
	}

	/*char buf[100]={0};   //��д�ַ������ļ�
	strcpy(buf, "howareyou");
	fwrite(buf, sizeof(char), strlen(buf), fp);
	memset(buf, 0, strlen(buf));
	fseek(fp, 0, SEEK_SET);
	fread(buf, sizeof(char), 10, fp);
	puts(buf);*/
	

	//char buf[100];   //fseek��λ�ļ�ָ��
	//strcpy(buf, "this is a test file!");
	//int ret = fwrite(buf, sizeof(char), strlen(buf), fp);
	//fseek(fp, -1, SEEK_CUR);
	//printf("%c\n",fgetc(fp));
	
	int ch = fgetc(fp);
	while (ch != EOF)
	{
		if (ch=='b')
		{
			printf("%c", ch);
		}
		
		ch = fgetc(fp);
	}
	
	
	fclose(fp);
}