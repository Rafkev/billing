#include <stdio.h>

#define MAX_ITEMS 100 

typedef struct {
    char name[50];
    int quantity;
    float price;
} Item;

int main() {
    Item items[MAX_ITEMS];
    int numItems;
    float total = 0.0;

    printf("Enter number of items: ");
    scanf("%d", &numItems);

    // Input items
    for (int i = 0; i < numItems; i++) {
        printf("\nEnter details of item %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Price per item: ");
        scanf("%f", &items[i].price);
    }

    // Print bill header
    printf("\n\n==============================\n");
    printf("        Customer Bill\n");
    printf("==============================\n");
    printf("Item Name\tQuantity\tPrice\n");

    // Calculate total and print bill
    for (int i = 0; i < numItems; i++) {
        printf("%s\t\t%d\t\t%.2f\n", items[i].name, items[i].quantity, items[i].price * items[i].quantity);
        total += items[i].price * items[i].quantity;
    }

    // Print total
    printf("\nTotal Amount: %.2f\n", total);

    return 0;
}
