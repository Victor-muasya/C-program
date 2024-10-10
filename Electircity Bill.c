#include <stdio.h>
int main(){
	//Program to disply the electricity bill for a given customer based on the units cvonsumed
	int CustomerID;
	char CustomerName[50];
	int UnitConsumed;
	float ChargesperUnit;
	float totalbill;
	float TotalAmounttoPay;
	
	//Ask for user input
	printf("Enter customer ID:");
	scanf("%d",&CustomerID);//Capture customer ID
	
	printf("Enter customer name:");
	scanf("%s",&CustomerName);//Capture customer name
	
	printf("Enter unit consumed(as a number):");
	scanf("%d",&UnitConsumed);//Variable to store number of unit consumed
	
	//Calculate charges per unit based on the units consumed
	if(UnitConsumed <=199){
		ChargesperUnit =1.20;//Ksh 1.20 per unit
	}else if(UnitConsumed <=400){
		ChargesperUnit =1.50;//Ksh 1.50 per unit
	}else if(ChargesperUnit <=600){
		ChargesperUnit =1.80;//Ksh 1.80 per unit
	}else{
		ChargesperUnit =2.00;//Ksh 2.00 per unit
	}
	
	//Calculate the total bill
	totalbill = UnitConsumed * ChargesperUnit;
	if(totalbill >=400){
		totalbill = totalbill * 15/100;//Capture totalbill
	}
	
	//Calculate total amount to pay
	TotalAmounttoPay = totalbill;
	
	//Display the results
	printf("\n---electricity bill details---\n");
	printf("customer id: %d\n",CustomerID);
	printf("customer name: %s\n",CustomerName);
	printf("unit consumed: %d\n",UnitConsumed);
	printf("charges per unit: %.2f\n",ChargesperUnit);
	printf("total amount to pay: %2.f\n",TotalAmounttoPay);
	
	return 0;
	
}