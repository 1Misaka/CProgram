#include<stdio.h>
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*List;

void del(List& L) {
	LNode *p;
	p = L->next;
	L->next = p->next;
	free(p);
}
int main() {

}