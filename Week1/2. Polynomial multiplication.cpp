#include<stdio.h>
int main(){
	int p2,p1,p0;
	int A,B,C,D;
	
	printf("Enter A :");
	scanf("%d",&A);
	printf("Enter B :");
	scanf("%d",&B);
	printf("Enter C :");
	scanf("%d",&C);
	printf("Enter D :");
	scanf("%d",&D);
	
	p2 = A*C;
	p1 = A*C+B*D;
	p0 = B*D;
	
	printf("The product is : %dx^2+%dx+%d\n",p2,p1,p0);
	return 0;
}
