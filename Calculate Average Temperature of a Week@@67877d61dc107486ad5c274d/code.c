#include <stdio.h>

// Define the Day structure
struct Day {
    char name[20];
    int temperature;
};

int main() {
    struct Day week[7];
    int sum = 0;

    // Input data for 7 days
    for (int i = 0; i < 7; i++) {
        scanf("%s %d", week[i].name, &week[i].temperature);
        sum += week[i].temperature;
    }

    // Calculate and display the average temperature
    float average = sum / 7.0;
    printf("Average Temperature: %.2f\n", average);

    return 0;
}
