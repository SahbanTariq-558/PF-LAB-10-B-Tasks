
#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int year;
    float rating;
};

int main() {
    struct Movie m[100];
    int count = 0;
    int choice;
    char searchGenre[30];

    do {
        printf("\n1. Add New Movie");
        printf("\n2. Search Movie by Genre");
        printf("\n3. Display All Movies");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Movie Title: ");
            scanf(" %[^\n]", m[count].title);

            printf("Enter Genre: ");
            scanf(" %[^\n]", m[count].genre);

            printf("Enter Director: ");
            scanf(" %[^\n]", m[count].director);

            printf("Enter Release Year: ");
            scanf("%d", &m[count].year);

            printf("Enter Rating: ");
            scanf("%f", &m[count].rating);

            count++;

            printf("Movie Added Successfully!\n");
        }

        else if (choice == 2) {
            printf("Enter Genre to Search: ");
            scanf(" %[^\n]", searchGenre);

            int found = 0;

            for (int i = 0; i < count; i++) {
                if (strcmp(m[i].genre, searchGenre) == 0) {
                    printf("\nMovie Title: %s", m[i].title);
                    printf("\nGenre: %s", m[i].genre);
                    printf("\nDirector: %s", m[i].director);
                    printf("\nRelease Year: %d", m[i].year);
                    printf("\nRating: %.1f\n", m[i].rating);

                    found = 1;
                }
            }

            if (found == 0) {
                printf("No Movie Found!\n");
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                printf("\nMovie %d", i + 1);
                printf("\nTitle: %s", m[i].title);
                printf("\nGenre: %s", m[i].genre);
                printf("\nDirector: %s", m[i].director);
                printf("\nYear: %d", m[i].year);
                printf("\nRating: %.1f\n", m[i].rating);
            }

            if (count == 0) {
                printf("No Movies Available!\n");
            }
        }

        else if (choice == 4) {
            printf("Program Ended!");
        }

        else {
            printf("Invalid Choice!");
        }

    } while (choice != 4);

    return 0;
}
