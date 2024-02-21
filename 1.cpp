#include<stdio.h>
int main(){
	int n,i,j,temp=0;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element %d:",i);
		scanf("%d",&a[i]);
	}
	printf("Original Elements:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("Iteration %d: ",i+1);
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			printf("%d ",a[j]);
		}
		
	printf("\n");
	}
}
