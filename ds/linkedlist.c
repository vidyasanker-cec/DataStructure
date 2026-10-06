#include<stdio.h>
#include<stdlib.h>
struct node{
	    int data;
	    struct node *link;  
	   };

struct node *head = NULL;

void insertFirst(){
		   struct node *newnode;
		   newnode=(struct node*)malloc(sizeof(struct node));
		   
		   if(newnode == NULL){
		   	printf("\n no space available\n");
		   	return;
		   }
		   newnode->link = NULL;
		   printf("\n enter the value to insert to front :\n");
		   scanf("%d",& newnode->data);
		   if (head == NULL){
		   	head=newnode;
		   }
		   else{
		   	newnode->link= head;
		   	head=newnode;
		   }
		   printf("\n element inserted %d\n",newnode->data);
}

void insertLast(){
		  struct node *temp=head,*newnode;
		  newnode=(struct node*)malloc(sizeof(struct node));
		
		  if(newnode == NULL){
		  	printf("\n no space available\n");
		   	return;
		  }
		  newnode->link= NULL;
		  printf("\n enter the value to insert to last :\n");
		  scanf("%d",&newnode->data);
		  if(head == NULL){
			head=newnode;
		  }
		  else{
			while(temp->link != NULL){
				temp=temp->link;
			}
			temp->link=newnode;
		  }
		  printf("\n element inserted successfully %d\n",newnode->data);
}

void insertLocation(){

		int key;
		struct node *newnode,*temp=head;
		newnode=(struct node*)malloc(sizeof(struct node));
		
		if(newnode == NULL){
		  	printf("\n no space available\n");
		   	return;
		}
		
		newnode->link= NULL;
		if(head ==NULL){
			printf("\n LIST EMPTY\n");
		}
		printf("\n Enter the key were after you want to add element\n");
		scanf("%d",&key);
		while(temp != NULL && temp->data != key){
			temp=temp->link;
		}
		if(temp==NULL){
			printf("\nvalue not exist\n");
			return;
		}
		printf("\n enter the value to insert:\n");
		scanf("%d",&newnode->data);
		newnode->link= temp->link;
		temp->link =newnode;
		printf("\n value inserted successfully");
}

void deleteFirst(){
		struct node *temp =head;
		
		if(head == NULL){
		  	printf("\n  LIST EMPTY\n");
		   	return;
		}
		
		head=temp->link;
		printf("\n value deleted %d",temp->data);
		free(temp);
}

void deleteLast(){
		
		struct node *temp=head, *prev=NULL;
		if(head == NULL){
		  	printf("\n  LIST EMPTY\n");
		   	return;
		}
		if(temp->link ==NULL){
			printf("\n value %d deleted \n", temp->data);
			head =NULL;
			free(temp);
			return;
		}
		while(temp->link !=NULL){
			prev=temp;
			temp=temp->link;
		}
		printf("\n value %d deleted \n", temp->data);
		prev->link= NULL;
		free(temp);
}

void deleteLocation(){
		
		int key;
		struct node *prev=NULL,*temp=head;
		if(head == NULL){
		  	printf("\n  LIST EMPTY\n");
		   	return;
		}
		printf("\n Enter the key you want to delete\n");
		scanf("%d",&key);
		if(temp->data == key){
			head = temp->link;
			printf("\n value %d is deleted\n",temp->data);	
			free(temp);
			return;
		}
		while ( temp!=NULL && temp->data !=key){
			prev=temp;
			temp=temp->link;
		}
		if(temp == NULL){
			printf("\nvalue doesnt exist\n");
			return;
		}
		prev->link=temp->link;
		printf("value %d id deleted",temp->data);
		free(temp);
}

void search(){
		struct node *temp=head;
		int pos=0, found=1,val;
		if(head==NULL){
			printf("\n  LIST EMPTY\n");
		   	return;
		}
		
		printf("\nenter the value to search\n");
		scanf("%d",&val);
		while(temp!=NULL){
			if(temp->data==val){
				printf("\n %d value found at location %d \n",temp->data,pos+1);
				found=1;
			}
			pos++;
			temp=temp->link;
		}
		if(!found){
			printf("value %d not exist",val);
		}
}

void display(){
		struct node *temp=head;
		if(head==NULL){
			printf("\n  LIST EMPTY\n");
		   	return;
		}
		printf("\nelements in the list;\n\n");
		while(temp != NULL){
			printf("%d\t",temp->data);
			temp=temp->link;
		}
}

void main(){
	
	int choice;
	printf("\n SINGLY LINKRD LIST \n");
	do{
		printf("\n1.insert First\n2.insert Last\n3.insert Location\n4.delete First\n5.delete Last\n6.delete Location\n7.search\n8.display\n9.exit\n");
		printf("\nEnter Choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insertFirst();
				break;
			
			case 2:
				insertLast();
				break;
			
			case 3:
				insertLocation();
				break;
			
			case 4:
				deleteFirst();
				break;
			
			case 5:
				deleteLast();
				break;
			
			case 6:
				deleteLocation();
				break;
			
			case 7:
				search();
				break;
			
			case 8:
				display();
				break;
			
			case 9:
				printf("\nEXIT\n");
				exit(0);
			
			default:
				printf("\nINVALID CHOICE\n");
			}
	}
	while(choice!=9);
}
			
			
			
		
				
		
		
		
		
		
		  
