#include <stdio.h>
#include <cs50.h>

int get_height_int(void);
int main(void)
{
    int n = get_height_int();   
    for(int newline = 0; newline < n; newline++)   
    {
        for(int space = newline + 1; space < n ; space++)
        {
            printf(".");
        }
        for(int hashleft = 0; hashleft <= newline; hashleft++)
        {
            printf("#");
        }
        for(int gap = 0; gap <=1; gap++)
        {
            printf(".");
        }
        for(int hashright = 0; hashright <= newline; hashright++)
        {
            printf("#");
        }
      
printf("\n");
    }  

}



















    int get_height_int(void)
{
    int n;
    do 
    {
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);
    return n;
}
