#include "stdio.h"

int Day;

int main(int argc, char const *argv[]){
	printf("This is Find a day in the week Program.\n");
	printf("Day 1-7 Pick only one number !! : "); //input Day number
	scanf("%d",&Day);

	//find a Day

	switch (Day){
		case 1 :
		printf("It Sunday!!\n");
		   break;
		case 2 :
		printf("It Monday!!\n");
		   break;
		case 3 :
		printf("It Tuesday!!\n");
		   break;
		case 4 :
		printf("It Wednesday!!\n");
		   break;
		case 5 :
		printf("It Thursday!!\n");
		   break;
		case 6 :
		printf("It Friday!!\n");
		   break;
		case 7 :
		printf("It Saturday!!\n");
		   break;
		default:{
			printf("Error: You must enter a number between 1 and 7.\n");
		}
	}
}