#include <stdio.h>
#include <string.h>

// Define the Vehicle structure
struct Vehicle {
    char number[20];
    char type[10];
    float toll;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Vehicle v[n];
    float car_total = 0, truck_total = 0, bike_total = 0;

    // Input details of each vehicle
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", v[i].number, v[i].type, &v[i].toll);
        if (strcmp(v[i].type, "Car") == 0) {
            car_total += v[i].toll;
        } else if (strcmp(v[i].type, "Truck") == 0) {
            truck_total += v[i].toll;
        } else if (strcmp(v[i].type, "Bike") == 0) {
            bike_total += v[i].toll;
        }
    }

    // Display result
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", car_total, truck_total, bike_total);

    return 0;
}
