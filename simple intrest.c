#include <stdio.h>

int main() {
	
	/*
	Program to calculate the compound intrest
	program to accept principle amount,Time and Rate
	Author:Victor Muasya
	Reg no.:CT101/G/23936/24
	*/
	
	float p;//This is the principle amount
	float t;//This is the investment time
	float r;//This is the intrest rate per investment period
	float SI;//This is the intrest earned per period
	
	printf("Please enter the principle amount\n");
	scanf("%f",&p);
	printf("Please enter the investment time\n");
	scanf("%f",&t);
	printf("Please enter the intrest rate per investment period\n");
	scanf("%f",&r);
	SI=(p*t*r)/100;
	r=r/100;
	
	printf("You entered the principle amount as %.2f\n",p);
	printf("You entered the investment time as %.1f\n",t);
	printf("You entered the rate of simple intrest as %.2f\n",r*100);
	printf("The simple intrest earned is %.2f\n",SI);
	
	return 0;
}