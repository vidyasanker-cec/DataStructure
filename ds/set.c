#include<stdio.h>
void main(){
	
	int i;
	int U[5]={1,2,3,4,5};
	int A[5]={1,0,0,1,1};
	int B[5]={0,1,1,1,0};
	int uni[5],intsn[5],diffA[5],diffB[5],compA[5],compB[5];
	
	printf("UNIVERSAL SET={");
	for(i=0;i<5;i++){
		printf("%d,",U[i]);
	}
	printf("}");
	
	printf("\n\nSET A={");
	for(i=0;i<5;i++){
		if(A[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nSET B={");
	for(i=0;i<5;i++){
		if(B[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nUnion of A and B bit representation is =");
	for(i=0;i<5;i++){
		uni[i]= A[i]| B[i];
		printf("%d,",uni[i]);
	}
	
	printf("\n\nUNION={");
	for(i=0;i<5;i++){
		if(uni[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nIntersection of A and B bit representation is =");
	for(i=0;i<5;i++){
		intsn[i]=A[i]&B[i];
		printf("%d,",intsn[i]);
	}
	
	printf("\n\nINTERSECTION={");
	for(i=0;i<5;i++){
		if(intsn[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nCompliment of A ");
	for(i=0;i<5;i++){
		compA[i]= 1-A[i];
		printf("%d,",compA[i]);
	}
	
	printf("\n\nA COMPLIMENT={");
	for(i=0;i<5;i++){
		if(compA[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nCompliment of B ");
	for(i=0;i<5;i++){
		compB[i]=1-B[i];
		printf("%d,",compB[i]);
	}
	
	printf("\n\nB COMPLIMENT={");
	for(i=0;i<5;i++){
		if(compB[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nDifference: A-B ");
	for(i=0;i<5;i++){
		diffA[i]= A[i]&compB[i];
		printf("%d,",diffA[i]);
	}
	
	printf("\n\nA-B={");
	for(i=0;i<5;i++){
		if(diffA[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
	
	printf("\n\nDifference: B-A ");
	for(i=0;i<5;i++){
		diffB[i]=B[i]&compA[i];
		printf("%d,",diffB[i]);
	}
	
	printf("\n\nB-A={");
	for(i=0;i<5;i++){
		if(diffB[i]==1){
			printf("%d,",U[i]);
		}
	}
	printf("}");
}
	
