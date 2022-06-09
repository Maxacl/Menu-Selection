

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void PrintFunction() {
    printf("Please choose your items from \"Today's Menu\":\n");
    printf("\t 1) Pizza\n");
    printf("\t 2) Hamburger\n");
    printf("\t 3) Taco\n");
    printf("\t 4) Nachos\n");
    printf("\t 5) Popcorn\n");
    printf("\t 6) Quit\n");
}

int main() {

    bool quit = false;
    int choose;

    while (!quit)   {
        PrintFunction();
        printf("\n");
        printf("Make your choice! \n");
        scanf_s("%d", &choose);
        if (choose == 6) {
            printf("Have a nice day!");
            quit = true;
        }

        else {

            if (choose == 1) {
            printf("You have selected: Pizza");
            }
            else if (choose == 2) {
            printf("You have selected: Hamburger");
            }
            else if (choose == 3) {
            printf("You have selected: Taco");
            }
            else if (choose == 4) {
            printf("You have selected: Nachos");
            }
            else if (choose == 5) {
            printf("You have selected: Popcorn");
            }

        }

        if (choose > 7 ) {
            printf("Uh-oh, please input a valid number from the menu!\n");
        }

        return (0);
    }
}
