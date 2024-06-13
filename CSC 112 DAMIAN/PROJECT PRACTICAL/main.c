#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Home Page
void home_page() {
    printf("Welcome to Hotel Management System\n");
    printf("Enjoy our luxurious accommodations and top-notch services\n");
    printf("Book your stay today!\n");
}

// Service Page
void service_page() {
    printf("Our Services:\n");
    printf("- Comfortable rooms\n");
    printf("- Fine dining restaurant\n");
    printf("- Spa and wellness center\n");
    printf("- Fitness center\n");
    printf("- 24/7 concierge service\n");
    printf("- Free Wifi Connection\n");
}

// Online Booking and Payment Page
void booking_page() {
    char name[50], email[50], check_in[11], check_out[11];
    int num_nights, num_guests;
    float total_cost;

    printf("Online Booking and Payment\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter check-in date (DD/MM/YYYY): ");
    scanf("%s", check_in);
    printf("Enter check-out date (DD/MM/YYYY): ");
    scanf("%s", check_out);
    printf("Enter number of nights: ");
    scanf("%d", &num_nights);
    printf("Enter number of guests: ");
    scanf("%d", &num_guests);

    // Calculate total cost (assuming $100 per night per guest)
    total_cost = num_nights * num_guests * 100;

    printf("\nBooking Summary:\n");
    printf("Name: %s\n", name);
    printf("Email: %s\n", email);
    printf("Check-in: %s\n", check_in);
    printf("Check-out: %s\n", check_out);
    printf("Number of nights: %d\n", num_nights);
    printf("Number of guests: %d\n", num_guests);
    printf("Total cost: $%.2f\n", total_cost);

    printf("\nProceed to payment? (y/n) ");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("Payment successful!\n");
    } else {
        printf("Booking cancelled.\n");
    }
}

int main() {
    home_page();
    service_page();
    booking_page();
    return 0;
}
