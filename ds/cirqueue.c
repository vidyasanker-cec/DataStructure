#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

int isFull(){
	if((rear+1)% MAX == front){
		return 1;
	}
	return 0;
}

int isEmpty(){
	if(front == -1 && rear== -1){
		return 1;
	}
	return 0;
}


void display(){
	int i;
	if(isEmpty()){
		printf("\nQueue Underflow \n");
		return;
	}
	printf("\nQueue element are: \n");
	i=front;
	do{
		printf("%d\t",queue[i]);
		i= (i+1)%MAX;
	}while(i !=(rear+1)%MAX);
}


void enqueue(){
	
	int x;
	if (isFull()){
		printf("\n Queue Overflow \n");
		return;
	}
	printf("\n enter the element:\n");
	scanf("%d",&x);			
	if(isEmpty()){
		front=rear=0;
	}
	else{
		rear= (rear+1)% MAX;
	}
	queue[rear]=x;
	printf("\n element %d is inserted \n", x);
}

void dequeue(){
	
	if(isEmpty()){
		printf("\nQueue Underflow \n");
		return;
	}
	printf("\n Deleted element is %d \n", queue[front]);
	if(front == rear){
	front=rear=-1;
	}
	else{
		front = (front+1)%MAX;
	}
}



void search(){
	int i,key,found=0;
	if(isEmpty()){
		printf("\nQueue Underflow \n");
		return;
	}
	printf("\nEnter element is to search :\n");
	scanf("%d",&key);	
	i=front;
	do{
		if(queue[i]==key){
			printf("\n element %d found at postion %d \n", key,i);
		found=1;
		break;
		}
	i=(i+1)%MAX;		
	}while(i != (rear+1)%MAX);
	if(!found){
		printf("\n element not found ");
	}
}

int main(){

	int choice ,item;
	do{
		printf("\n---QUEUE OPERATIONS---\n");
		printf("1. Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.search\n");
		printf("5.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
				break;
			case 5:
				printf("Program Exited\n");
				return 0;
			default:
				printf("\ninvalid choice\n");
				break;
		}
	}while(choice != 5);
	return 0;
}
