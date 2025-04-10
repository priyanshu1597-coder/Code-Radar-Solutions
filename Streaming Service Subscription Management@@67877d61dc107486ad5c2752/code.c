#include <stdio.h>
#include <string.h>

// Define the Subscription structure
struct Subscription {
    char userName[50];
    char subType[20];
    float cost;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Subscription subs[n];

    int basic_count = 0, standard_count = 0, premium_count = 0;
    float basic_revenue = 0, standard_revenue = 0, premium_revenue = 0;

    // Read user subscription data and accumulate counts and revenues
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].userName, subs[i].subType, &subs[i].cost);
        
        if (strcmp(subs[i].subType, "Basic") == 0) {
            basic_count++;
            basic_revenue += subs[i].cost;
        } else if (strcmp(subs[i].subType, "Standard") == 0) {
            standard_count++;
            standard_revenue += subs[i].cost;
        } else if (strcmp(subs[i].subType, "Premium") == 0) {
            premium_count++;
            premium_revenue += subs[i].cost;
        }
    }

    // Output the result
    printf("Basic: %d Users, Revenue: %.2f; ", basic_count, basic_revenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standard_count, standard_revenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premium_count, premium_revenue);

    return 0;
}
