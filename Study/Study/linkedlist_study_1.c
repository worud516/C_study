//https://www.youtube.com/watch?v=8FVgOb6hmPg
#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	struct node* next;
	int data;
}NODE;


int main() {

	NODE* head = malloc(sizeof(struct node));

	NODE* node1 = malloc(sizeof(struct node));
	head->next = node1;
	node1->data = 10;

	NODE* node2 = malloc(sizeof(struct node));
	node1->next = node2;
	node2->data = 20;

	NODE* node3 = malloc(sizeof(struct node));
	node2->next = node3;
	node3->data = 30;

	node3->next = NULL;

	NODE* curr = head->next;
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(node3);
	free(node2);
	free(node1);
	free(head);

	return 0;
}