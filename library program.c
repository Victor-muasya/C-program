#include <stdio.h>

int main(){
	/*
	Author:victor muasya
	Reg no.:CT101/G/23936/24
	*/
	int bookID;
	int dueDate,returnDate,daysOverdue;
	float fineRate,fineAmount;
	//Ask for user input
	printf("Enter book ID:");
	scanf("%d",&bookID);//Capture book ID
	
	printf("Enter the due date(as a day number):");
	scanf("%d",&dueDate);//Capture due date
	
	printf("Enter return date(as a day number):");
	scanf("%d",&returnDate);//Capture return date
	
	//Determine days overdue
	daysOverdue = returnDate-dueDate;
	
	//Calculate the fine rate based on days overdue
	if(daysOverdue <=0){
		fineRate =0.0;//No fine
	}else if(daysOverdue <=7){
		fineRate =20.0;//Ksh 20 per day
	}else if(daysOverdue <=14){
		fineRate =50.0;//Ksh 50 per day
	}else{
		fineRate =100.0;//Ksh 100 per day
	}
	
	//Calculate the total fine amount
	fineAmount = fineRate * daysOverdue;
	
	//Show the resuts
	printf("\n--- Lbrary Fine Details---\n");
	printf("book ID:%d\n",bookID);
	printf("Due Date:%d\n",dueDate);
	printf("Return Date:%d\n",returnDate);
	printf("Days Overdue:%d\n",daysOverdue);
	printf("Fine Rate:Ksh %.3f per day\n",fineRate);
	printf("Total Fine Amount:Ksh %.3f\n",fineAmount);
	
	return 0;
}