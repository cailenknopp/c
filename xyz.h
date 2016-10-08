#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
/* Made by Cailen Knopp, 2015.
(C) All rights reserved
You may redistribute this file as long as you have made a contribution to the code. 
That is all, just know that if you try and sell this file (even if you have made a contribution!) 
I will have a team of Giraffes come to your house and roundhouse kick you so hard. It's called
open source, it is forever free for everyone. Oh, by the way feel free to contribute to this code 
or modify it to your needs.
*/

 
//_______________________________________________________________________________________________       
        
        // *PRINT FUNCTIONS

//say* For people learning or people who wanto be more efficient. Acts as printf.
void say(string s)
{
    printf("%s\n", s);
}

//saynumber* For people learning or people who wanto be more efficient. Acts as printf an int.


//SayInt
int SayInt(int a)
{
    printf("%i\n", a);
    return 0;
}     

//SayString

void SayString(string a)
{
    printf("%s\n", a);
}

//give string
int GiveString()
{
    string s = GetString();
    printf("%s\n", s);
    return 0;
} 
//give int
int GiveInt()
{
    int a = GetInt();
    printf("%i\n", a);
    return 0;
}


            //EasterEgg(s)

//EasterEgg 1

int rainbow()
{
    printf("Passcode: \n");
    int p = GetInt();
    
    do
    {
    
    printf(".\n"); 
    printf("..\n");
    printf("...\n");
    printf("....\n");
    printf(".....\n");
    printf("......\n"); 
    printf(".....\n");
    printf("....\n");
    printf("...\n");
    printf("..\n");
    printf(".\n");        
    }
    while (p == 1234);
    return 0;
}

            //Delay
            
            // MATH

//cube
int cube(int n)
{ 
    printf("%i\n", n * n * n);
return 0;
}


//square
int square(int n)
{ 
    printf("%i\n", n * n);
return 0;
}

//add
int add(int n, int a)
{ 
    printf("%i\n", n + a);
return 0;
}

//subtract
int subint(int n, int a)
{ 
    printf("%i\n", n - a);
return 0;
}

//plus check
int CheckIntPos(int n)
{
    if (n > 0)
    {
    printf("Success!\n");
    }
else if (n <= 0)
    {
    printf("Error\n");
    }
 return 0;
}

//minus check
int CheckIntNeg(int n)
{
    if (n < 0)
    {
    printf("Success!\n");
    }
else if (n >= 0)
    {
    printf("Error\n");
    }
 return 0;
}

//random int

int random()
{
    int n = 0;
    while (n <10);
    printf("%d\n", 1+rand()%10);
    n++;
    
    return 0;
}
