/*
Design a Data Structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() 
and an additional operation getMin() which should return minimum element from the SpecialStack. 
All these operations of SpecialStack must be O(1). To implement SpecialStack, 
you should only use standard Stack data structure and no other data structure like arrays, list, .. etc. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
//#define N INT_MAX

// struct Queue{
// 	int queue[N];
// 	int front;
// 	int rear;
// };
// struct Queue* q = NULL;

// void enQueue(int n){
// 	if(q->front==-1 && q->rear == -1){
// 		q->front = q->rear = 0;
// 		q->queue[q->front] = n;
// 	}
// 	else if(q->front == N-1){
// 		printf("QUEUE OVERFLOW");
// 	}
// 	else{
// 		q->front++;
// 		q->queue[q->front] = n;
// 	}
// }

// int deQueue(){
// 	if(q->front==-1 && q->rear == -1){
// 		printf("Queue : UNDERFLOW");
// 	}else if(q->front==q->rear){
// 		int n = q->queue[q->rear];
// 		q->front=q->rear=-1;
// 		return n;
// 	}
// 	else{
// 		int n = q->queue[q->rear];
// 		q->rear++;
// 		return n;
// 	}
// }

struct SpecialStack{
	int top;
	int stack[100];

};

int minStack[100]={100};

int minTop = -1;




void push(struct SpecialStack* s, int n ){
	
	//printf("\nTOP : %d",s->top);
	s->top++;
	s->stack[s->top] = n;
	minTop++;
	if(minStack[minTop]>n){
		minStack[minTop]=n;
	}
	else{
		if(minTop==0){
			minStack[minTop] = n;
			printf("minstack[minTop] = %d\tminTop = %d", minStack[minTop], minTop);
		}
		else{
			minStack[minTop] = minStack[minTop-1];

			printf("minstack[minTop] = %d\tminTop = %d", minStack[minTop], minTop);
		}
	}
}


int pop(struct SpecialStack* s){
	int n = s->stack[s->top];
	s->top--;
	minTop--;
	return n;
}

int getMin(){
	return minStack[minTop];
}

int main(){

	struct SpecialStack* s  = (struct SpecialStack*)malloc(sizeof(struct SpecialStack));
	//s->min=0;
	s->top=-1;

	
	for(int i =0; i<10; i++){
		int n = random()%30;
		printf("\nRandom No : %d",n);
		push(s, n);
		printf("\nMIN NO INSERTED : %d",getMin());
	}


	for(int i =0; i<10; i++){
		printf("\n%d",pop(s) );

	}

}
