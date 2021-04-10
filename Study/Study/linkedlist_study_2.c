//https://www.youtube.com/watch?v=EYi8ZA6qapA

#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	struct node* next;
	int data;
}NODE;

void addFirest(NODE* target, int data) {
	NODE* newNode = malloc(sizeof(NODE));
	newNode->next = target->next;
	newNode->data = data;

	target->next = newNode;
}



int main() {

	NODE* head = malloc(sizeof(NODE));

	
	head->next = NULL;

	
	addFirest(head, 10);
	addFirest(head, 20);
	addFirest(head, 30);

	NODE* curr = head->next;
	
	while (curr != NULL) {
		
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	
	curr = head->next;
	while (curr != NULL) {
		NODE* next = curr->next;
		free(curr);
		curr = next;
	}
		
	free(head);

	return 0;
}