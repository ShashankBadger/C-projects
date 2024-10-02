#include <stdio.h>
#include <stdlib.h>


int main(){
	// this is my c project
	int num1,num2, op, result = 0;
	char oper;
	do {
		printf("================= Welcome ================");
		printf("\n======= Two digit basic Calculstor =======");
		printf("\nEnter the Operation : \n 1 Addition\n 2 Substaction\n 3 Multipication\n 4 Diviom\n 5 Exit");
		printf("\nChoose the operation : ");
		scanf("%d",&op);
		if(op == 5){
			printf("\nThank you for using basic calculstor\n");
			exit(0);
		} else {
			printf("\nEnter a first number: ");
			scanf("%d",&num1);
			printf("Enter a Second number: ");
			scanf("%d",&num2);
			switch(op){
				case 1 : result = num1 + num2;
				 	oper = '+';
				 	break;
				case 2: result = num1 - num2;
					oper = '-';
					break;
				case 3: result = num1 * num2;
					oper = '*';
					break;
				case 4: if (num2 == 0){
						printf("\nZero division error");
						oper = '/';
					} else {
						result = num1 / num2 ;
						oper = '/';
					}
					break;
				default : printf("\nInvalid operation");
			}
		printf("\nThe result of %d %c %d = %d\n", num1, oper, num2, result);
		}

	}while(1);


	return 0;
}

