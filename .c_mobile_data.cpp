//James
//bs
/*3. Mobile Data Bundle Purchase
A local mobile service provider offers different internet data bundles as shown below:
Option Bundle Cost (KES)
1 100 MB 50
2 500 MB 200
3 1 GB 350
4 2 GB 600
Task:
Write a C program that:
1. Displays the menu above.
2. Asks the user to enter their choice (1–4).
3. Uses a switch statement to display the bundle selected and its cost.
4. Displays “Invalid choice” if the user enters a number outside 1–4.
Sample Output
Select data bundle:
1. 100MB @ 50 KES
2. 500MB @ 200 KES
3. 1GB @ 350 KES
4. 2GB @ 600 KES
Enter your choice (1-4): 3
You selected 1GB. Cost = 350 KES*/

#include <stdio.h>
int main(){
	int choice;
	
	printf("MOBILE DATA BUNDLE PURCHASE");
	printf("\n--------PICK YOUR CHOICE------\n");
	printf("1. 100MB @ 50\n");
	printf("2. 500MB @ 200\n");
	printf("3. 1GB @ 350\n");
	printf("4. 2GB @ 600\n");
	
	//user's choice
	printf("Enter you choice (1-4) : ");
	scanf("%d", &choice);
	
	//Computing user's choice
	switch(choice){
		case 1: printf("\nYou selected 100MB. cost = 50 KES");
		break;
		
		case 2: printf("\nYou selected 500MB. cost = 200 KES");
		break;
		
		case 3: printf("\nYou selected 1GB. cost = 350 KES");
		break;
		
		case 4: printf("\nYou selected 2GB. cost = 600 KES");
		break;
		
		default:
			printf("\nInvalid Choice");
	}
}
