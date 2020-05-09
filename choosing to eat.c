#include<stdio.h>
int main()
{
int choice;
printf(" you can have 1. pizza rs 239 \n 2. burger rs129 \n 3. pasta rs 179 \n4. french fries rs 99 \n 5. sandwich rs.149");
scanf("%d",&choice);
switch(choice)
{
	case1:
		printf("food item - pizza \n price - rs 239");
		break;
	case 2:
		printf("food item - burger \n price - rs 129");
		break;
	case 3:
		printf("food item - pasta \n price - rs 179");
		break;
	case 4:
		printf("food item - french fries \n price - rs 99");
		break;
	case 5: 
	printf("food item - sandwich \n price - rs 149");
		break;
	default:
		printf("use the default case");
}
}
