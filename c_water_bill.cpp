//Jemmoh
//all we do is ball
/*2. Water Bill Calculator
A water company charges customers based on the following consumption rules:
i. 0–30 units ? 20 KES per unit
ii. 31–60 units ? 25 KES per unit
iii. Above 60 units ? 30 KES per unit
Task:
Write a C program that:
1. Prompts the user to enter the number of water units consumed.
2. Uses if–else if–else statements to calculate the total bill.
3. Displays the total bill in KES with two decimal places. */

#include <stdio.h>

int main(){
	//declaring variables
	float units;
	double total_bill=0;
	 
	 //user inputs
	 printf("Enter number of units :");
	 scanf("%f", &units);
	 
	 //calculating the total bill
	 if(units<=30){
	 	total_bill=units*20;
	 	
	 }
	 else if(units<=60){
	 	total_bill=(30*20) +(units-30)*25;
	 }
	 else {
	 	total_bill=(30*20)+(30*25)+(units-60)*30;
	 }
	  //displaying the total  bill
	  printf("\n-----Total Bill : %.2f kes",total_bill);
	  
	  return 0;
	     
}




