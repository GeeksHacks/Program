#include<stdio.h>
int main(){
	int num=0,rev=0;
	
	printf("Enter the postive integer to be reversed : ");
	scanf("%d",&num);
	while(num>0){
		
		rev=rev*10+(num%10);
		num = num/10;		
	}
	printf("The reversed number is : %d",rev);
}
