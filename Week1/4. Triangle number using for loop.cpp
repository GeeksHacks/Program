#include<stdio.h>
int main(){
	int sum=0;
	int n,i;
	
	printf("What triangular number do you want : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("The %dth triangle number is %d",n,sum);
}
