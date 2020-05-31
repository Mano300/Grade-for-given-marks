#include<stdio.h>
int main()
{
int num;
printf("Enter marks ");
scanf("%d",&num);
printf(" You entered %d\n", num); 

	if(num >= 85&& num<=100){
	printf(" Grade A"); 
		}
	else if ( num >=70 && num<=84 ){ 
		printf("Grade B");
		}
	else if ( num >=55 && num<=69){
		printf("Grade C");
		}
	else if ( num >=40 && num<=54){
		printf(" Grade D");
		}
	else if ( num <40){
		printf(" Grade F");
	}
	
return 0;
}

