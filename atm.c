#include<stdio.h>
int main(){
	int choice;
	int amount= 10000; 
	int add_amount;  
	int sub_amount;
	int password = 4546;
	int enter_password;
	int attemp = 0 ;
	int putcard = 1234;
	
	
	printf("\n---Insert Card ---\n");
	printf("Enter your card number  : ");
	scanf("%d",&putcard);
	if(putcard == 1234)
   	{
		printf("Valid  Card Number \n"); 
    }
	else 
	{
	 	printf("Invalid Card Number!!");
	 	return 0 ;
	}
 
 
 
	printf("\n---Enter Password---\n");
	while(attemp < 3){
		printf("Enter 4 Digit password : ");
		scanf("%d",&enter_password);
		
		if(enter_password == password)
		{
			printf("Your Password is Correct \n");
			break;
		}
		else 
		{
			attemp++;
			printf("You Enter Wrong password\n", 3-attemp);
		
		}
	}
	if(attemp == 3)
	{
		printf("Too many Attemp Your Card had Been Blocked \n");
			return 0 ;
	}
	
	
	
	do{
		printf("\n---ATM---\n");
		printf("1.Check Balance : \n");
		printf("2.Credit amount : \n");
		printf("3.Debit amount : \n");
		printf("4.Exit \n");
		
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
	
	
		switch(choice){
			case 1 : 
		printf("Your Balance : %d \n",amount);
		printf("Thank you! Visit again.\n\n");
		break; 
		
		
		case 2 :
			printf("Enter the amount : ");
			scanf("%d",&add_amount);
			amount += add_amount;
			printf("Your amount has been credited  : %d\n",amount);
			printf("Thank you! Visit again.\n\n");
			break ;
			
			
			case 3:
				printf("Enter the amount :");
				scanf("%d",&sub_amount);
				
				if (amount>1000){
				amount-=sub_amount;
				printf("Your amout have debited  : %d\n ",sub_amount);
				printf("Remaining Balance : %d\n",amount);
				printf("Thank you! Visit again.\n\n");
				}
				else
				{
				printf("Insufficent balance!\n");
				printf("Thank you! Visit again.\n\n");
				break ;
				case 4:
					return 0 ;
			}
		}	
	}while(choice < 5 );
	return 0 ;
}
