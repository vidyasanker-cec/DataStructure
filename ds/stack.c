#include<stdio.h>
#define MAX 10
int stack[MAX];
int top = -1;

   void push(int item){
   	if(top == MAX - 1 ){
   		printf("\n Stack overflow");
   		return;
   	}
   	stack[++top]= item;
   	printf("\n %d pushed to stack", item);
   }
   
   void pop(){
   	if(top == - 1 ){
   		printf("\n Stack underflow");
   		return;
   	}
   	printf("\n %d popped from stack", stack[top--]);
   }
   
   void peek(){
   	if(top == - 1 ){
   		printf("Stack is empty");
   		return;
   	}
   	printf("\n %d is the peek element in the stack", stack[top]);
   }
   
   void display(){
   	if(top == - 1 ){
   		printf("Stack is empty");
   		return;
   	}
   	printf("elements in stack:\n");
   	for(int i=top;i>-1;i--){
   		printf("%d\n", stack[i]);
   	}
   }
   
int main(){

   int choice,value;
   while(1){
   	printf("\n\n Stack Operation Menu");
   	printf("\n 1.PUSH");
   	printf("\n 2.POP");
   	printf("\n 3.PEEK");
   	printf("\n 4.DISPLAY");
   	printf("\n 5.EXIT");
   	printf("\n Enter your choice");
   	scanf("%d",&choice);
        switch(choice){
        	case 1:
        		scanf("%d",&value);
        		push(value);
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
        		printf("\n Exiting program");
        		return 0;
        	
        	default:
        		printf("\n Invalid choice");
        }
    }
 }
