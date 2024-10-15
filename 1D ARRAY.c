#include <stdio.h>
int main(){
	int CustomerID;
	char CustomerName[50];
	int UnitConsumed;
	float ChargesperUnit;
	float totalbill;
	float surcharge = 0;
	float minimumBill = 100;
	float TotalAmounttoPay;
	
	//Array to disply the charge rate for a given customer based on the units consumed
	float rate [4] = {1.20, 1.50, 1.80 ,2.00};
	
	//prompt for user input
	printf("Enter customer ID:");
	scanf("%d",&CustomerID);//Capture customer ID
	
	printf("Enter customer name:");
	scanf("%s",&CustomerName);//Capture customer name
	
	printf("Enter unit consumed(as a number):");
	scanf("%d",&UnitConsumed);//Variable to store number of unit consumed
	
	//Calculate charges per unit based on the units consumed
	if(UnitConsumed <=199){
		ChargesperUnit = rate[0];
	}else if(UnitConsumed <=400){
		ChargesperUnit = rate[1];
	}else if(ChargesperUnit <=600){
		ChargesperUnit = rate[2];
	}else{
		ChargesperUnit = rate[3];
	}
	
	//Calculate the total bill
	totalbill = UnitConsumed * ChargesperUnit;
	
	//Add a 15% surcharged fee if the bill exceeds 400
	if(totalbill >=400){
		surcharge = totalbill * 0.15;
		totalbill += surcharge;
	}
	
	//Make sure the mininimum bill is 100
	if(totalbill < minimumBill){
		totalbill = minimumBill;
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