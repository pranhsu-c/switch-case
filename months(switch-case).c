#include<stdio.h>

main()
{
	int m;
	
	printf("\n1st january");
	printf("\n2nd february");
	printf("\n3rd march");
	printf("\n4th april");
	printf("\n5th may");
	printf("\n6th june");
	printf("\n7th july");
	printf("\n8th august");
	printf("\n9th september");
	printf("\n10th october");
	printf("\n11th november");
	printf("\n12th december");
	printf("\nenter your month=");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1: printf("january month");
		     break;
		     
	    case 2: printf("february month");
	         break;
	         
	    case 3: printf("march month");
		     break;
		     
		case 4: printf("april month");
		     break;   
		     
		case 5: printf("may month");
		     break;	  
		     
	    case 6: printf("june month");
		     break;	
			 	
	    case 7: printf("july month");
		     break;  
		     
	    case 8: printf("august month");
		     break;
		     
		case 9: printf("september month");
		     break; 
		     
	    case 10: printf("october month");
		     break;	
			 	   
	    case 11: printf("november month");
		     break;  
		     
		case 12:printf("december month");
		     break;     
		     
	 default:printf("plz enter correct value");
	         break;
	}
	
}
