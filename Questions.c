// "EzResume 2015" written August 7, 2015

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf(" \n");
    printf("Hello and welcome to Resume 2015!\n");
    
    printf(" \n");
    
    printf("To begin, please tell me your name: \n"); 
    string n = GetString(); 
    
    printf("Please tell me your birthday: \n");
    string b = GetString();
    
    printf("Please tell me your favorite colour: \n");
    string c = GetString();
    
    printf("Please tell me your favorite sport: \n");
    string t = GetString();

    printf("Please tell me your gender (press 1 for male, press 2 for female): \n");
    int gender = GetInt();
    
    if (gender == 1)
    {
    printf("%s's birthday is %s. His favorite colour is %s and his favorite sport is %s.\n", n, b , c, t);
    }
    
    else if (gender == 2)
    {printf("%s's birthday is %s. Her favorite colour is %s and her favorite sport is %s.\n", n, b , c, t);
    }
}    
