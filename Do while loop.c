//Do While looop
#include <stdio.h>
int maain(){
	int number;
	//Start the loop
	do{
		//prompt for user input 
		printf("Enter a number(-1 to stop):");
		scanf("%d",&number);
		
		//Display the number if the number entered is not -1
		if(number != -1){
			printf("You entered:%d\n", number);
		}
		
	}while (number != -1);//Loop continues until the user enters -1
	
	printf("program terminated.\n");
	
	return 0;
}