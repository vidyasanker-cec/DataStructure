#include<stdio.h>
#include<stdlib.h>
struct node{
	    int data;
	    struct node *link;  
	   };
struct node *top = NULL;

void push(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode == NULL){
		printf("\n no space available\n");
		return;
	}
	
	newnode->link= NULL;
	printf("\nenter the element to insert:\n");
	scanf("%d",&newnode->data);
	if(top == NULL){
		top=newnode;
	}
	else{
		newnode->link=top;
		top=newnode;
	}
	printf("\n%d INSERTED SUCCESSFULLY\n",newnode->data);
}

void pop(){
	struct node *temp= top;
	if(top==NULL){
		printf("\nSTACK UNDERFLOW\n");
		return;
	}
	printf("\n %d is popped",temp->data);
	top=temp->link;
	free(temp);
}

void peek(){
	struct node *temp= top;
	if(top==NULL){
		printf("\nSTACK UNDERFLOW\n");
		return;
	}
	printf("\nTOP ELEMENT IS  %d",temp->data);
}

void display(){
	struct node *temp= top;
	if(top==NULL){
		printf("\nEMPTY STACK U\n");
		return;
	}
	printf("\nELEMENTS IN STACK ARE:\n");
	while(temp!=NULL){
			printf("%d\t",temp->data);
			temp=temp->link;
		}
	printf("\n");	
}
	
void search(){
	struct node *temp= top;
	int key, found=0;
	if(top==NULL){
		printf("\nEMPTY STACK U\n");
		return;
	}
	printf("\nenter the element to serach:\n");
	scanf("%d",&key);
	while(temp!=NULL){
		if(temp->data==key){
			printf("\n%d ELEMENT IS FOUNDED\n",temp->data);
			found=1;
		}
		temp=temp->link;
	}
	if(!found){
		printf("\nELEMENT NOT FOUND\n");
	}
}

void main(){
	int choice;
	printf("\n--------------STACK-----------------\n");
	do{
		printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.SEARCH\n6.EXIT\n");
		printf("\nEnter Choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				peek();
				break;
			
			case 4:
				display();
				break;
			
			case 5:
				search();
				break;
			
			case 6:
				printf("\nEXIT\n");
				exit(0);
			
			default:
				printf("\nINVALID CHOICE\n");
			}
	}
	while(choice!=6);
}
	
	
	
	
	








