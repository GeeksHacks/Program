#include<stdio.h>
 int main(){
 	int sum=0;
 	int k=1,n,i;
 	 printf("Enter the upper limit :\t");
 	 scanf("%d",&n);
 	 for(i=0;i<n;i++){
 	 	sum=sum+k;
		  k=k+2;
	  }
	  printf("The sum of odd numbers till %d is %d",n,sum);
 }
