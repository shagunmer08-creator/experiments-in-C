#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    printf("Enter your Name: ");
    scanf(" %[^\n]", addr.name);
    printf("Name: %s\n", addr.name);

    printf("\nEnter your Hostel Address: ");
    scanf(" %[^\n]", addr.hostel_address);
    printf("Hostel Address: %s\n", addr.hostel_address);

    printf("\nEnter your City: ");
    scanf(" %[^\n]", addr.city);
    printf("City: %s\n", addr.city);

    printf("\nEnter your State: ");
    scanf(" %[^\n]", addr.state);
    printf("State: %s\n", addr.state);

    printf("\nEnter ZIP Code: ");
    scanf(" %[^\n]", addr.zip);
    printf("ZIP Code: %s\n", addr.zip);

    printf("\n--- Present Address ---\n");
    printf("Hostel Address: %s\n", addr.hostel_address);
    printf("City: %s\n", addr.city);
    printf("State: %s\n", addr.state);
    printf("ZIP: %s\n", addr.zip);

    return 0;
}