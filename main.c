#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Python/Python.h>

#pragma GCC ignored -Wall

void clear()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}


void menu() {
    char *text;
    char *shellsay = "./apps/shellsay/shellsay ";
    system("./menu.py");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
	    clear();
            system("./apps/clock/clock");
	    clear();
            menu();
        case 2:
	    clear();
            system("./apps/random/random");
	    menu();
	case 3:
	    clear();
            system("./apps/calculator/calculator");
            menu();
	case 4:
	    clear();
	    system("./apps/shellsay/shellsay.py");
	    menu();
	case 5:
	    clear();
	    system("./apps/guesser/guesser");
	    menu();
        case 6:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice\n");
	    clear();
            menu();
    }
}

int main() {
	menu();
}
