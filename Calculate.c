#include "stdio.h"

int choose;
float num1,num2,result;

int main(int argc, char const *argv[]){
	printf("This is calculate Program \n");
	printf("If you want to add write 1 \n");
	printf("If you want to substract write 2 \n");
	printf("If you want to multiply write 3 \n");
	printf("If you want to Divide write 4 \n");
	printf("What service do you want? : ");
	scanf("%d",&choose);

	//switch funtion

	switch (choose){
		case 1 :
		printf("Write the number : ");
		scanf("%f",&num1);
		printf("Write the next number : ");
		scanf("%f",&num2);
		result = num1 + num2;
		printf("You result is = %.2f\n",result);
		   break;
		case 2 :
		printf("Write the number : ");
		scanf("%f",&num1);
		printf("Write the next number : ");
		scanf("%f",&num2);
		result = num1 - num2;
		printf("You result is = %.2f\n",result);
		   break;
		case 3 :
		printf("Write the number : ");
		scanf("%f",&num1);
		printf("Write the next number : ");
		scanf("%f",&num2);
		result = num1 * num2;
		printf("You result is = %.2f\n",result);
		   break;
		case 4 :
		printf("Write the number : ");
		scanf("%f",&num1);
		printf("Write the next number : ");
		scanf("%f",&num2);
		if (num2 != 0){
			result = num1 / num2;
			printf("You result is = %.2f\n",result);
		}
		else{
			printf("You can not divide by 0 !!");
		}
		   break;
		default : printf("Wrong please try again!!");
	}
}
	
	
