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
	
	//Array to disply the charge rates and unit ranges for a given customer
	//Each row has:{min_unit, max_unit, charge_rate} 
	float rates [4] [3]= {{0, 199, 1.20},{200, 399, 1.50},{400, 599, 1.80},{600, 1000, 2.00} //assuming 10000 is the upper limit for simplicity
	};
	
	//prompt for user input
	printf("Enter customer ID:");
	scanf("%d",&CustomerID);//Capture customer ID
	
	printf("Enter customer name:");
	scanf("%s",&CustomerName);//Capture customer name
	
	printf("Enter unit consumed(as a number):");
	scanf("%d",&UnitConsumed);//Variable to store number of unit consumed
	
	//Calculate charges per unit based on the units consumed
		if(UnitConsumed >= rates[0][0] && UnitConsumed <= rates[0][1]){
			ChargesperUnit =rates[0][2];
			}
		else if(UnitConsumed >= rates[1][0] && UnitConsumed <= rates[1][1]){
			ChargesperUnit =rates[1][2];
		}
		else if(UnitConsumed >= rates[2][0] && UnitConsumed <= rates[2][1]){
			ChargesperUnit =rates[2][2];
		}
		else if(UnitConsumed >= rates[3][0] && UnitConsumed <= rates[3][1]){
			ChargesperUnit =rates[3][2];
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