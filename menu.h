#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int menu(int menu)
{ 
    
    printf("\t(  )   (   )  )\n\t ) (   )  (  (\n\t ( )  (    ) )\n\t _____________\n\t<_____________> _\n__\t|             |/ _ \\ \n\t|               | | |\n\t|               |_| |\n\t___|             |\\___/\n\t/    \\___________/    \\\n\t\\_____________________/");
    printf("\n\n");
    printf(" __      __       .__                                     __\n/  \\    /  \\ ____ |  |   ____  ____   _____   ____      _/  |_ ____        _____   ____   ____  __ __\n\\   \\/\\/   _/ __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\     \\   __/  _ \\      /     \\_/ __ \\ /    \\|  |  \\\n \\        /\\  ___/|  |_\\  \\__(  <_> |  Y Y  \\  ___/      |  |(  <_> )    |  Y Y  \\  ___/|   |  |  |  /\n  \\__/\\  /  \\___  |____/\\___  \\____/|__|_|  /\\___  >     |__| \\____/     |__|_|  /\\___  |___|  |____/\n       \\/       \\/          \\/            \\/     \\/                            \\/     \\/     \\/\n");      
   

    
    int quantity,total=0,count,bill=0;

    char ch,option;
    //printf("Welcome to Fast KItchen");
    sleep(2);
    system("clear");
     while (option!='N')
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
            printf("\n\nDo you you want to add more ?\n(if yes than press Y if no than press N)\nEnter Your choice: ");
            scanf(" %c",&option);

            switch (option)
            {
            case'Y':
            system("clear");
            printf("\n Showing Menu :");
            break;
            }
        break;

     case'2':
            printf("Nooddles-350 Taka \n Plese enter Quantity: ");
            scanf("%d",&quantity);

            total=quantity*350;
            bill=bill+total;
            printf("\nNooddles - %dx350=%d Taka",quantity,total);
            printf("\n\nDo you you want to add more ?\n(if yes than press Y if no than press N)\nEnter Your choice: ");
            scanf(" %c",&option);

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
            printf("\n\nDo you you want to add more ?\n(if yes than press Y if no than press N)\nEnter Your choice: ");
            scanf(" %c",&option);

            switch (option)
            {
            case'Y':
            system("clear");
            printf("\n Showing Menu :");
            break;
          
            }
        break;
     case'4':
            printf("Fried Rice-450 Taka \n Plese enter Quantity: ");
            scanf("%d",&quantity);
            total=quantity*450;
            bill=bill+total;
            printf("\nFried Rice - %dx450=%d Taka",quantity,total);
            printf("\n\nDo you you want to add more ?\n(if yes than press Y if no than press N)\nEnter Your choice: ");
            scanf(" %c",&option);

            switch (option)
            {
            case'Y':
            system("clear");
            printf("\n  Showing Menu :");
            break;
            
            }
        break;
    
    }
    
 }
    system("clear");
 printf("\n Your Total Bill is %d ",bill);
 
 return menu; 
    
    

}