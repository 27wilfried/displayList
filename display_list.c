#include <stdlib.h>
#include <stdio.h>

struct Node
 {
        int val;
        struct Node * next;
 };

void displayList(struct Node *head);
void destroyList(struct Node *head);
struct Node * initList(int n); 
struct Node * deleteFirst(struct Node * head);
struct Node * deleteLast(struct Node * head);
struct Node * deleteNode(struct Node * head, int val);

void main(void) 
{
	struct Node * head = initList(10);
	displayList(head);
	head = deleteFirst(head);
	displayList(head);
	head = deleteLast(head);
	displayList(head);
	head = deleteNode(head, 5);
	displayList(head);
	head = deleteNode(head, 2);
	displayList(head);


destroyList(head);
}

struct Node * createNode(int val)
{
	struct Node * p = (struct Node *) malloc(sizeof(struct Node));
	p->val = val;
	p->next = NULL;
	return p;
}

void destroyNode(struct Node *p)
{
	free(p);
}

struct Node * deleteFirst(struct Node * head)
{
	return NULL;
}

struct Node * deleteLast(struct Node * head)
{
	return NULL;
}

struct Node * deleteNode(struct Node * head, int val)
{	
	return NULL;
}

struct Node * initList(int n) 
{
	if (n<=0) return NULL;
	struct Node * head = createNode(0);
	struct Node * p = head;
	for (int i=1; i<n; i++) 
	{
		p->next = createNode(i);
		p = p->next;
}
return head;
}

void destroyList(struct Node *head)
{
	for (struct Node *p = head; p!=NULL;) 
	{
		struct Node * temp = p;
		p = p->next;
		free(temp);
	}
}

void displayList(struct Node *head)
{
	for (struct Node *p = head; p!=NULL; p=p->next)
	 {
         printf("->%d",p->val); 
	 }
	printf("\n");
}
