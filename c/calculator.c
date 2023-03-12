#include<stdio.h>



int main(){

	float num1,num2,res;
	char ope;

	printf("Enter the oprator :\n");
	scanf("%c",&ope);

	printf("Enter two numbers: \n");
	scanf("%f %f",&num1,&num2);
	
	switch(ope){
	
	case '+':
		res = num1 + num2;
		printf("The result is : %.2f\n",res);
	
		break;

	case '-':
		res = num1 - num2;
		printf("the result is : %.2f\n",res);

		break;


	case '*':
		res = num1 * num2;
		printf("The result is : %.2f\n",res);
		
		break;

	case '/':
		if(num2 == 0){
		printf("Error: Cannot divide by zero\n");
		return 1;
		}
		res = num1 / num2;
		printf("The result is : %.2f\n",res);
		break;	
	
	}
	return 0;





}
