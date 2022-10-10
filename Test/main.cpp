#include<stdio.h>
#include<stdlib.h>
typedef struct LNode {
	char data;
	struct LNode* next;
}LNode,*LinkList;

void CreateList(LinkList& L, int n,char *ch) {
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	for (int i = 0; i < n; ++i)
	{
		LNode* p;
		p = (LNode*)malloc(sizeof(LNode));
		p->data = *ch;
		p->next = L->next;
		L->next = p;
		++ch;
	}
}
int main() {
	char ch[] = {'a','b', 'c', 'd', 'e' };
	LinkList L;
	CreateList(L, 5, ch);
	return 0;
}