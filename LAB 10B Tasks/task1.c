
#include <stdio.h>

struct Flight {
    int flightNo;
    char departure[30];
    char destination[30];
    char date[20];
    int seats;
};

int main() {
    struct Flight f;

    printf("Enter Flight Number: ");
    scanf("%d", &f.flightNo);

    printf("Enter Departure City: ");
    scanf(" %[^\n]", f.departure);

    printf("Enter Destination City: ");
    scanf(" %[^\n]", f.destination);

    printf("Enter Date: ");
    scanf(" %[^\n]", f.date);

    printf("Enter Available Seats: ");
    scanf("%d", &f.seats);

    int choice;

    do {
        printf("\n1. Book a Seat");
        printf("\n2. Display Flight Details");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (f.seats > 0) {
                f.seats--;
                printf("Seat Booked Successfully!\n");
            }
            else {
                printf("No Seats Available!\n");
            }
        }

        else if (choice == 2) {
            printf("\nFlight Number: %d", f.flightNo);
            printf("\nDeparture: %s", f.departure);
            printf("\nDestination: %s", f.destination);
            printf("\nDate: %s", f.date);
            printf("\nAvailable Seats: %d\n", f.seats);
        }

        else if (choice == 3) {
            printf("Program Ended!");
        }

        else {
            printf("Invalid Choice!");
        }

    } while (choice != 3);

    return 0;
}
