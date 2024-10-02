#include <stdio.h>

int main(){
	/*
	Author:Victor muasya
	Reg no:CT101/G/23936/24
    */

	int age;
	float income;
	//prompt the user to input their age
	printf("input your age");
	scanf("%d",&age);//use %d to capture an integer;for age
	//prompt the user to input their annual income
	printf("input annual income in Ksh");
	scanf("%f",&income);//use %f to capture a float number for income
		//Determine if the user qualifies for a loan
	if(age >=21 && income >=21000){
		//if the user meets both conditions,print success message
		printf("congratulations you are qualified for a loan.\n");
	}else {
		//if any of the conditions is not met, print failure message
		printf("Unfortunately,we are unable to offer you a loan at this time.\n");
	}
	
	
	return 0;
}