#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

int enqueue(int item){
	
	if (rear == MAX-1 ){
		printf("\n Queue Overflow \n");
	}
	else{
		if(front  ==-1){
			front =0;
		}
		rear++;
		queue[rear]= item;
		printf("\n %d is inserted into the queue \n", item);
	}
	return 0;
}

void dequeue(){
	
	if(front == -1 || front> rear){
		printf("\nQueue Underflow \n");
	}
	else{
		printf("\nDeleted element is %d \n", queue[front]);
		if(front == rear){
			front=rear=-1;
		}
		else{
			front++;
		}
	}
}

void display(){
	int i;
	if(front == -1 ){
		printf("\nQueue Underflow \n");
	}
	else{
		printf("\nQueue element are: \n");
		for(i=front; i<= rear; i++){
			printf("%d\t",queue[i]);
		}
		printf("\n");
	}
}

void peek(){
	
	if(front == -1 ){
		printf("\nQueue Underflow \n");
	}
	else{
		printf("\nFront element is %d \n", queue[front]);
	}
}

int main(){

	int choice ,item;
	do{
		printf("\n---QUEUE OPERATIONS---\n");
		printf("1. Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Peek\n");
		printf("5.Exit\n");
		printf("Enter ypur choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the element:\n");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				printf("Program Exited\n");
				break;
			default:
				printf("invalid choice\n");
				break;
		}
	}while(choice != 5);
	return 0;
}
