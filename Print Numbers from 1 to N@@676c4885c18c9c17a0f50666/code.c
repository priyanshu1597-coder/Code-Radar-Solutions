int main() {
    int N;

    // Ask the user to enter the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Initialize the variable to start at 1
    int i = 1;

    // Loop and print numbers from 1 to N
    while(i <= N) {
        printf("%d ", i);
        i++;
    }

    printf("\n");
    return 0;
}