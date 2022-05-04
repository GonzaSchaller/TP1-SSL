#include <stdio.h>    // Gonzalo Jorge Schaller
#include <ctype.h>

int main ()
{
int c; //int porque puede venir un EOF
while (EOF != (c=getchar()))
{
    if (!isdigit(c))
    {
        if (isupper(c))
        {
        c = tolower(c);
        }
         else if(islower(c))
        {
        c = toupper(c);
         }
    putchar(c);
    }
}
return 0;
}