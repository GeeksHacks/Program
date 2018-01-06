#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the triangular number you want :");
	scanf("%d",&n);

	while(i<=n){
		sum+=i;
		i++;
	}
	printf("The %dth triangle number is %d",n,sum);
}
