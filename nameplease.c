// "Name Please" created August 1, 2015
// CS50 Applicance, linux. 

#include <cs50.h>
#include <stdio.h>

int main(void)
{
   printf("Name Please:\n -------> ");
   string s = GetString ();
   printf("Hello, %s\n",s);
}
