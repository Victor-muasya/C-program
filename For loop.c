//For loop
#include <stdio.h>
int main (){
	int number;
	
	//start loop without predefined iterations
	for(;;){
		//prompt for user input
	printf("Enter a number(-1 to stop):");
	scanf("%d",&number);
	
	//loop breaks when the number entered is -1
	if(number == -1){
	break;
	}	
	//display the value entered
		printf("You entered %d\n",number);
	}
		
		printf("program terminated.\n");
		scanf("%d",&number);
	return 0;
}