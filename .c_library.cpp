/*Program to calculte fines due in the liblary
Days overdue
upto 7 days= ks 20
8 to 14days= ks 50
15days or more =ks 100
inputs required from the user: Book Id
                               due date
                               Return Date
HINT:(return date)-(due date)
 Program should display: Book ID
                         Due Date
                         return date
                         days Overdue
                         fine rate 
                         fine amount

*/

#include <stdio.h>

int main(){
	//variables declareration
	int bookID, dueDate, returnDate, daysoverdue;
	int finerate=0;
	int fineamount=0;
	
	//prompt the inputs from the user
	printf("Enter bookID: ");
	scanf("%d", &bookID);
	
	printf("Enter due Date: ");
	scanf("%d", &dueDate);
	
	printf("Enter return Date: ");
	scanf("%d", &returnDate);
	
	//calculate the days overdue
	daysoverdue=returnDate-dueDate;
	
	//Determine the finerate using an if....else statement
	if (daysoverdue<=0){
		daysoverdue=0;
		finerate=0;
	}
	if (daysoverdue<=7);{
	    finerate=20;
	}
	if (daysoverdue<=14){
		finerate=50;
	}
	if (daysoverdue>=15){
		finerate=100;
	}
	//calculations for fine amount
	fineamount=daysoverdue*finerate;
	
	//display the outputs
	printf("\n-----Library Fine Details----\n");
	printf("bookID: %d\n",bookID);
	printf("dueDate: %d\n",dueDate);
	printf("returnDate: %d\n",returnDate);
	printf("daysOverdue: %d\n",daysoverdue);
	printf("finerate: %d\n",finerate);
	printf("fineamount: %d\n",fineamount);
	
	
	return 0;
}
