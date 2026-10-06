#include<stdio.h>
int main(){
    
    int a[50],b[50],c[100],i,m,n,j,k;
    printf("Enter the size of the 1st array:");
    scanf("%d",&m);
    printf("Enter the elements of the 1st array:");
    for(i=0; i<m; i++){
    	scanf("%d",&a[i]);
    }
    printf("Enter the size of the 2st array (sorted oreder):");
    scanf("%d",&n);
    printf("Enter the elements of the 2st array (sorted oreder):");
    for(i=0; i<n; i++){
    	scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<m && j<n){
    	if(a[i] < b[j]){
    		c[k]= a[i];
    		i++;
    	}
    	else{
    		c[k] = b[j];
    		j++;
    	}
    k++;
    }
    while(i<m){
    	c[k]= a[i];
    	i++;
    	k++;
    }
    while(j<n){
    	c[k]= b[j];
    	j++;
    	k++;
    }
    printf("\n Merged arrays is:\t");
    for(i=0; i<n+m; i++){
    	printf("%d\t",c[i]);
    }
return 0;
}
    
