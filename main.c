
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "splash.h"
#include "login.h"
#include "menu.h"

int main(void)
{
    system("clear");
    splash(splash);
    sleep(4);
    system("clear");
    
    
    int n, result;
    
    do{
    
  
    printf("\t\t                                \tIF YOU ARE NEW CUSTOMER\t\t                        \n\t\t========================        \tPLEASE SIGN UP\t\t        =========================\n\t\t                                \tOTHERWISE LOGIN\t\t                                \n\n");
    printf("\t\t========================              \t1.SIGN UP\t                =========================\n\t\t========================          \t2.LOGIN\t\t                =========================");
  
    printf("\n\n\t\t=========================        \tCHOOSE AN OPTION\t        =========================\n");
    scanf("%d", &n);
        
        if (n ==1)
        {
            registration();
            sleep(2);
            system("clear");
            log_in();
        }
        
        else if (n != 1 && n != 2)
        {
            printf("\nINVALID INPUT\nTRY AGAIN\n");
            sleep(1);
            system("clear");
        }
        
    }while(n != 2);


    // PROGRAM RUN until login is successful
    
     if (n ==2)
    {
        do
        {
        if (log_in() == 1)
        {
             result = 0;
            printf("LOGIN SUCCESSFUL\n");
            sleep(1);
            system("clear");
            menu(main);
        }
        else
        {
            result = 1;
            printf("LOGIN UNSUCCESSFUL\nUSERNAME or PASSWORD INCORRECT\nTRY AGAIN\n");
            sleep(2);
            system("clear");
             
        }
        } while(result ==1);
    }
    
    
    
    return 0;
}