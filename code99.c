#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char monthName[12][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                              "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy):\n");
    fgets(date, sizeof(date), stdin);

   
    date[strcspn(date, "\n")] = '\0';

   
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    int m = atoi(month);
    if (m < 1 || m > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Output:\n%s-%s-%s\n", day, monthName[m - 1], year);

    return 0;
}