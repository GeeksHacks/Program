#include<stdio.h>
int main(){
	int m,n,rem;
	printf("Enter the value of m and n, such that (m>n) : ");
	scanf("%d%d",&m,&n);
	
	while(n!=0){
		rem=m%n;
		m=n;
		n=rem;
	}
	printf("The GCD is : %d",m);
}
