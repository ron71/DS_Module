#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node* prev;
	struct node* next;
	int data;
};

typedef struct node Node;

Node* createNode(int data){
	Node* new = (struct node*)malloc(sizeof(struct node*));

	new->data = data;
	new->next = NULL;
	new->prev = NULL;

	return new;
}

Node* addNode(Node* head, Node* new){
	if(head==NULL){
		head = new;
		return head;
	}else{
		Node* t = head;
		while(t->next!=NULL){
			t = t->next;
		}

		t->next = new;
		new->prev = t;

		return head;
	}
}

Node* createLinkedList(int size){
	Node* head = NULL;
	for(int i=0; i<size; i++){
		Node* new = createNode(((int)random())%20);
		head = addNode(head, new);
	}
	printf("\nLIST CREATED\n");
	return head;
}

void printList(Node* head){
	Node* t = head; 
	while(t!=NULL){
		printf("%d ", t->data);
		t = t->next;
	}
}

Node* reverseList(Node* head){
	Node* temp = head;
	Node* p = NULL;
	// Node* p = NULL;

	while(temp!=NULL){
		p = temp->prev;
		temp->prev = temp->next;
		temp->next = p;
		temp=temp->prev;
	}
	if(p!=NULL){
		head = p->prev;
	}

}

int main(){

	Node* head = createLinkedList(10);

	printList(head);
	printf("\n\n");
	head = reverseList(head);
	printList(head);
}