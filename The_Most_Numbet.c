#include "stdio.h"

float num1,num2,num3;

int main(int argc, char const *argv[]){
	printf("This is Find a Most number Program \n");
	printf("Write first number : ");
    scanf("%f",&num1);
	printf("Write Second number : ");
    scanf("%f",&num2);
	printf("Write Third number : ");
    scanf("%f",&num3);
	
	if (num1 > num2 && num1 > num3){
		printf("The most number is : %f",num1);
	}
	
	else if (num2 > num1 && num2 > num3){
		printf("The most number is : %f",num2);
	}
	
	else if (num3 > num1 && num3 > num2){
		printf("The most number is : %f",num3);
	}
	else{
		printf("please write a different number.");
	}
}