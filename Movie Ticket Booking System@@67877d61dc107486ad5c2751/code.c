#include <stdio.h>
#include <string.h>

// Define the MovieTicket structure
struct MovieTicket {
    char movieName[50];
    char ticketType[20];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);

    struct MovieTicket tickets[n];
    float standard_total = 0, premium_total = 0, vip_total = 0;

    // Read ticket information and accumulate revenue by type
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].price);
        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standard_total += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premium_total += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vip_total += tickets[i].price;
        }
    }

    // Print the total revenue for each type
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standard_total, premium_total, vip_total);

    return 0;
}
