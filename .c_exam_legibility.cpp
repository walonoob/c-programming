/*Week 3 Assignments
1. Exam Eligibility
Write a program that checks if a student is eligible for final exams. A student is eligible if:
i. Attendance is >= 75%, AND
ii. Average marks are >= 40.
Otherwise, print “Not eligible.”
*/

#include <stdio.h> 

int main(){
	float attendance;
	float average_marks;
	
	printf("Enter attendance percentage : ");
	scanf("%f", &attendance);
	
	printf("Enter average Marks : ");
	scanf("%f", &average_marks);
	
	//Check legibillity 
	if(attendance>=75){
		printf("eligible");
		
	}
	else{
		printf("Not elligible for exams");
	}
	
	return 0;
}
