#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("choose a app/emulator to install:\n");
    printf("1. box8\n");
    printf("2. retropie\n");
    printf("3. steam\n");
    printf("4. wine\n");
    printf("5. update\n");
    scanf("%lf", &input);

    switch(input)
    {
        default:
            printf("nothing chosen");
            break;
        case '1':
            system("chmod +x box86-install.sh");
            system("./box86-install.sh");
            break;
        case '2':
            system("chmod +x retropie-install.sh"); 
            system("./retropie-install.sh");
            break;
        case '3':
            system("chmod +x steam-install.sh"); 
            system("./steam-install.sh");
            break;
        case '4':
            system("chmod +x wine-install.sh"); 
            system("./wine-install.sh");
            break;
        case '5':
            system("sudo apt upgrade");
            break;
    }
    return 0;
}
