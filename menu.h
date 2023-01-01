#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int menu(int menu)
{ 
    
    printf("\t(  )   (   )  )\n\t ) (   )  (  (\n\t ( )  (    ) )\n\t _____________\n\t<_____________> _\n__\t|             |/ _ \\ \n\t|               | | |\n\t|               |_| |\n\t___|             |\\___/\n\t/    \\___________/    \\\n\t\\_____________________/");
    printf("\n\n");
    printf(" __      __       .__                                     __\n/  \\    /  \\ ____ |  |   ____  ____   _____   ____      _/  |_ ____        _____   ____   ____  __ __\n\\   \\/\\/   _/ __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\     \\   __/  _ \\      /     \\_/ __ \\ /    \\|  |  \\\n \\        /\\  ___/|  |_\\  \\__(  <_> |  Y Y  \\  ___/      |  |(  <_> )    |  Y Y  \\  ___/|   |  |  |  /\n  \\__/\\  /  \\___  |____/\\___  \\____/|__|_|  /\\___  >     |__| \\____/     |__|_|  /\\___  |___|  |____/\n       \\/       \\/          \\/            \\/     \\/                            \\/     \\/     \\/\n");      
   

    
    int quantity,total=0,count,bill=0;

    char ch,option,option2;
    
    sleep(2);
    system("clear");
     while (option2!='2')
     {
        
     
     
    printf("\n\t\t------------Please choose your food sir----------\n\n\t\t--------------1.Burger-260 Taka-----------------\n\t\t--------------2.Nooddles-350 Taka---------------\n\t\t--------------3.Biriyani-570 Taka---------------\n\t\t--------------4.Fried Rice- 450 Taka------------\n ");

    printf("\nEnter your choice: ");
    scanf(" %c",&ch);
    
    switch (ch)
    { 
    case'1':
            printf("Burger-260 Taka \n Plese enter Quantity: ");
            scanf("%d",&quantity);
            total=quantity*260;
            bill=bill+total;
            printf("\nBurger - %dx260=%d Taka",quantity,total);
            printf("\nTotal Bill : %d",bill);
            printf("\n\nEnter your choice: ");
            printf("\n1.Add more\n2.Go to payment method\n ");
            scanf(" %c",&option2);
            switch (option2)
            {
            case '1':system("clear");
                     printf("\n Showing Menu :");
               break;
            case '2': system("clear");
               printf("\n Your Total Bill is %d ",bill);
            
            default:
               break;
            }
        break;

     case'2':
            printf("Nooddles-350 Taka \n Plese enter Quantity: ");
            scanf("%d",&quantity);

            total=quantity*350;
            bill=bill+total;
            printf("\nNooddles - %dx350=%d Taka",quantity,total);
            printf("\nTotal Bill : %d",bill);
            printf("\n\nEnter your choice: ");
            printf("\n1.Add more\n2.Go to payment method\n ");
            scanf(" %c",&option2);
            switch (option2)
            {
            case '1':system("clear");
                     printf("\n Showing Menu :");
               break;
            case '2': system("clear");
               printf("\n Your Total Bill is %d ",bill);
            
            default:
               break;
            }
            

            switch (option)
            {
            case'Y':
            system("clear");
            printf("\n Showing Menu  :");
            break;
            
            }
        break;
     case'3':
            printf("Biriyani-570 Taka \n Plese enter Quantity: ");
            scanf("%d",&quantity);
            total=quantity*570;
            bill=bill+total;
            printf("\nBiriyani - %dx570=%d Taka",quantity,total);
            printf("\nTotal Bill : %d",bill);
            printf("\n\nEnter your choice: ");
            printf("\n1.Add more\n2.Go to payment method\n ");
            scanf(" %c",&option2);
            switch (option2)
            {
            case '1':system("clear");
                     printf("\n Showing Menu :");
               break;
            case '2': system("clear");
               printf("\n Your Total Bill is %d ",bill);
            
            default:
               break;
            }
          
        break;
     case'4':
            printf("Fried Rice-450 Taka \n Plese enter Quantity: ");
            scanf("%d",&quantity);
            total=quantity*450;
            bill=bill+total;
            printf("\nFried Rice - %dx450=%d Taka",quantity,total);
            printf("\nTotal Bill : %d",bill);
            printf("\n\nEnter your choice: ");
            printf("\n1.Add more\n2.Go to payment method\n ");
            scanf(" %c",&option2);
            switch (option2)
            {
            case '1':system("clear");
                     printf("\n Showing Menu :");
               break;
            case '2': system("clear");
               printf("\n Your Total Bill is %d ",bill);
            
            default:
               break;
            }
        break;
    
    }
    
 }
   
 //pay bill

 char pay;
 int num,pin;

 printf("\n\nEnter your payment method: ");

 printf("\n1.Bkash\n2.Rocket\n3.Credit Card\n4.Cash on delivery \n-");
 scanf(" %c",&pay);
 system("clear");

 switch (pay)
 {
 case '1':
        printf("\nEnter your Bkash number: ");
        scanf("%d",&num);
        printf("\nEnter your pin: ");
        scanf("%d",&pin);
        system("clear");
        printf("Thank you payment succesful\nYour order is on the way");
        break;
case '2':
        printf("\nEnter your Rocket number: ");
        scanf("%d",&num);
        printf("\nEnter your pin: ");
        scanf("%d",&pin);
        system("clear");
        printf("Thank you payment succesful\nYour order is on the way");
        break;
 case '3':
        printf("\nEnter your Credit card number: ");
        scanf("%d",&num);
        printf("\nEnter your pin: ");
        scanf("%d",&pin);
        system("clear");
        printf("\nThank you payment succesful\nYour order is on the way");
        break;
case '4':
        
        printf("\n\nThank you Your order is on the way\nYou have to pay %d Taka",total);
        break;
 default:
    break;
 }



 
 return menu; 
    
    

}