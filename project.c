#include <stdio.h>
#include <string.h>

#define MAX 50

struct Event {
    char name[50];
    char date[20];
    char venue[50];
};

void addEvent(struct Event events[], int *count) {
    if (*count >= MAX) {
        printf("Event list is full!\n");
        return;
    }
    
    printf("Enter Event Name: ");
    scanf(" %[^\n]", events[*count].name);

    printf("Enter Event Date (DD/MM/YYYY): ");
    scanf(" %[^\n]", events[*count].date);

    printf("Enter Event Venue: ");
    scanf(" %[^\n]", events[*count].venue);

    (*count)++;
    printf("Event added successfully!\n\n");
}

void displayEvents(struct Event events[], int count) {
    if (count == 0) {
        printf("No events to display.\n");
        return;
    }

    printf("\n--- Event List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Event %d:\n", i + 1);
        printf("Name : %s\n", events[i].name);
        printf("Date : %s\n", events[i].date);
        printf("Venue: %s\n\n", events[i].venue);
    }
}

void searchEvent(struct Event events[], int count) {
    char searchName[50];
    printf("Enter event name to search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < count; i++) {
        if (strcmp(events[i].name, searchName) == 0) {
            printf("\nEvent Found!\n");
            printf("Name : %s\n", events[i].name);
            printf("Date : %s\n", events[i].date);
            printf("Venue: %s\n\n", events[i].venue);
            return;
        }
    }
    printf("Event not found.\n");
}

int main() {
    struct Event events[MAX];
    int count = 0, choice;

    while (1) {
        printf("==== Event Management System ====\n");
        printf("1. Add Event\n");
        printf("2. Display Events\n");
        printf("3. Search Event\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEvent(events, &count); break;
            case 2: displayEvents(events, count); break;
            case 3: searchEvent(events, count); break;
            case 4: return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}