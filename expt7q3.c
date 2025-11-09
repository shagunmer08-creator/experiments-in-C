#include <stdio.h>

// Define structure for Book
struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function to display book details (structure passed as argument)
void displayBook(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    struct Book b1;

    // Read book details
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b1.title);  // to read string with spaces

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b1.author);

    printf("Enter Book Price: ");
    scanf("%f", &b1.price);

    // Pass structure to function
    displayBook(b1);

    return 0;
}
