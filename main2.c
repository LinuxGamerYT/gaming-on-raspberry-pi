#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("this action requires a reboot. do it now?(Y/n)");
    char input;
    
    switch(input)
    {
        default:
            printf("nothing chosen");
            return 1;
        case 'Y':
            system("shutdown -r now");
            break;
        case 'y':
            system("shutdown -r now");
            break;
        case 'N':
            system("reboot");
            break;
        case 'n':
            system("reboot");
            break;
    }
    return 0;
}