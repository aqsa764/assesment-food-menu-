#include<stdio.h>
main()
{
	int choose,quantity,amount,price,totalamount=0;
	char addanother;
	
	do
	{
	printf("1.pizza price=180\n2.burger price=100\n3.dosa price=120\n4.idli price=50\n");
	printf("please select your food item from 1,2,3,4\n");
	scanf("%d",&choose);
	switch(choose)
	{
	case 1 :
		printf(" you selected pizza\n");
		printf("please select quantity : ");
		scanf("%d",&quantity);
		price=180;
		break;
	case 2:
		printf("you selected burger\n");
		printf("please select quantity : ");
		scanf("%d",&quantity);
		 price=100;
		break;
	case 3:
		printf("you selecter dosa \n");
		printf("please select quantity : ");
		scanf("%d",&quantity);
		price=120;
		break;
	case 4:
		printf("you selected idli\n");
		printf("please select quantity :");
		scanf("%d",&quantity);
		price=50;
		break;
	}
	amount=price*quantity;
	printf("\namount :%d",amount);
	
	totalamount=totalamount+amount;
	printf("total amount : %d",totalamount);
	
	printf("\n do you want pplace more order? Y & N :");
	addanother=getch();
	
}
while(addanother=='y'||addanother=='Y');
}
