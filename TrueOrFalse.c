//"True or flase" Written August 7, 2015

#include <stdio.h>
#include <cs50.h>

int main(void)
{//1
    printf("\n");
    printf("Hello, welcome Cailen's true and false quiz\n");
    printf("\n");
    printf("Press 1 to play or press 0 to quit:\n");
    int starter = GetInt();
    
    if (starter == 1)
    
        {//2
    
        printf("Please submit a username:\n");
        string username = GetString();
        printf("Rules: Press 1 on your keyboard to select true, press 0 to select flase\n");
        printf("\n");
       
        printf("\n");
        printf("Do you understand the rules and want to continue? (1=yes, 0=no)\n");
        
        
        int q1 = GetInt();
        
        if (q1 == 1)
            {//3
        
            printf("True (1) or flase (0)? In Cuba tourists use a different currency then local people.\n");
        
            int q2 = GetInt();
            
            if (q2 == 1)
            
            {
            printf("\n");
            printf("Correct!\n");
            printf("\n");
            
            
    question3: printf("True (1) or flase (0)? For three days each year, personal vehichles are not permitted to be driven in Botgota Colombia\n");
            int q3 = GetInt();
            
            if (q3 == 0)
            {
            printf("Correct!\n");
            
           //Score Break
            printf("True (1) or flase (0)? Valentine's day is banned is Saudi Arabia.\n");
            int q4 = GetInt();
            if (q4 == 1)
            
            {
            printf("Correct!\n");
            goto end;
            
            }
           
            else if (q4 == 0)
            {
            printf("Wrong!");
            goto end;
            
            
            }
            else if (q3 == 1)
            {
            printf("Wrong!\n");
         goto question3;
            }
            
            }
            else if (q2 == 0)
            
            { 
           
            
            printf("Wrong!\n");
            goto question3;
            
            }
            
            }//3
       
       
       else if (q1 == 0)
       
       {//4
        printf("Sorry to bother you with my friendship\n");
       }//4
       
        }//2

    else if (starter == 0)
    
    {//6
    
    printf("Sorry to bother you with my friendship\n");
    
    }//6

   end: printf("Gameover! %s.\n", username);
}//1


}
