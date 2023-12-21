#include<stdio.h>

int sum(int x, int y){
	return x+y;
}

int subs(int i, int j){
	return i-j;
}


int multi(int n, int m){
	return n*m;
}

int divid(int k, int l){
	return k/l;
}

int modulo(int p, int q){
	return p/q;
}

void main(){
	
	int a,b;
	int choice;
	
	printf("Enter value of A :");
	scanf("%d",&a);
	
	printf("Enter value of B :");
	scanf("%d",&b);
	
	printf("press 1 for addition(+)...\n");
	printf("press 2 for substraction(-)...\n");
	printf("press 3 for multiplication(*)...\n");
	printf("press 4 for division(/)...\n");
	printf("press 5 for modulo(%)...\n");
	printf("press 0 for exit...\n");
	
	do{
		printf("\nenter your choice :");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				printf("Addition of A and B is %d...\n",sum(a,b));
				break;
				
			case 2:
				printf("subtrection of A and B is %d...\n",subs(a,b));
				break;
				
			case 3:
				printf("multiplication of A and B is %d...\n",multi(a,b));
				break;
				
			case 4:
				printf("division of A and B is %d...\n",divid(a,b));
				break;
				
			case 5:
				printf("modulo of A and B is %d...\n",modulo(a,b));
				break;
					
			default:
		     	printf("invalid choice..\n");		
			break;		
		}
	}
	while(choice!=0);
}
