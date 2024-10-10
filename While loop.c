//While loop
#include <stdint.h>
int main(){
	int number;
	
	//Prompt the user to start entering a number
	printf("Enter a number");
	scanf("%d",&number);
	
	//program stops when the number entered is negative
	
	while(number >=0){
		printf("You entered %d\n",number);
		
		printf("Enter a number:");
		scanf("%d",&number);
	}
	return 0;
}