/* "Terminal Calculator", made by Cailen Knopp, August 30, 2015. 
(C) CailenXYZ, All rights reserved.
*/
#include <stdio.h>
#include <cs50.h>
#include "xyz.h"
#include <unistd.h>
#define KRED  "\x1B[31m"
#define KWHT  "\x1B[0m"
int main(void)
{
    say("...");
    sleep (1); 
    printf("Hello, welcome to TerminalCalculator!\n");
    say("");
    
    sleep (2); 
    main: printf("Select one of the following actions:\n");
    imput: say("Multiply(1) Cube Integer(2) Divide(3) Subtract (4) Add(5) Quit(6)");
    int a = GetInt();
     
    if (a == 1)
    
        {
            say("...");
            sleep (1);
            say("Please provide an integer to multiply:");
            int b = GetInt();
            say("Please provide another integer to multiply:");
            int c = GetInt();
            say("Multiplying...");
            sleep (1);
            printf("%i\n", b * c);
            
            sleep (1);
            say("Preform another action(1) Quit(2)");
            int d = GetInt();
            
            if (d == 1)
                
                {
                   goto main;               
                } 
            else if (d != 1)
                
                {
                    return 0;
                }
        }
    
    else if (a == 2)
    
        {
            say("...");
            sleep (1);
            say("Please provide an integer to cube:");
            int b = GetInt();
            printf("Cubing...\n");
            sleep (1);
            cube(b);
            
            sleep (1);
            say("Preform another action(1) Quit(2)");
            int d = GetInt();
        
            if (d == 1)
            {
                   goto main;               
                } 
            else if (d != 1)
                
                {
                    return 0;
                }
        }
    
    if (a == 3)
    
        {
            say("...");
            sleep (1);
            say("Please provide an integer to divide:");
            int b = GetInt();
            say("Please provide another integer to divide:");
            int c = GetInt();
            say("Dividing...");
            sleep (1);
            printf("%i\n", b / c);
            
            sleep (1);
            say("Preform another action(1) Quit(2)");
            int d = GetInt();
            
            if (d == 1)
                
                {
                   goto main;               
                } 
            else if (d != 1)
                
                {
                    return 0;
                }
        }

    else if (a == 4)
    
        {
            say("...");
            sleep (1);
            say("Please provide an integer to subtract:");
            int b = GetInt();
            say("Please provide another integer to subtract:");
            int c = GetInt();
            say("Subtracting...");
            sleep (1);
            subint(b, c);
            
            sleep (1);
            say("Preform another action(1) Quit(2)");
            int d = GetInt();
            
            if (d == 1)
                
                {
                   goto main;               
                } 
            else if (d != 1)
                
                {
                    return 0;
                }
        }
    
    if (a == 5)
    
        {
            say("...");
            sleep (1);
            say("Please provide an integer to add:");
            int b = GetInt();
            say("Please provide another integer to add:");
            int c = GetInt();
            say("Adding...");
            sleep (1);
            add(b, c);
            
            sleep (1);
            say("Preform another action(1) Quit(2)");
            int d = GetInt();
            
            if (d == 1)
                
                {
                   goto main;               
                } 
            else if (d != 1)
                
                {
                    return 0;
                }
        }
    
    else if (a == 6)
    
        {
            say("Bye.");
            sleep (1);
            return 0;        
        }
    
    if (a <= 0)
    
        {
            fail: printf("%sERROR:", KRED);
            printf("%s",  KWHT);
            printf(" Select valid integer or select 6 to quit");
            goto imput;
            return 0;
        }
    else if (a > 6)
    
        {
            goto fail;
        }  
}
