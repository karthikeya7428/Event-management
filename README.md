# course_project_1

# title : Event management

###Abstract:

The Event Management System is a simple C-based console application designed to store, display, and search event information. The program allows users to add events with details such as name, date, and venue. The stored events can then be displayed as a list or retrieved through a search by event name. This project demonstrates basic file-less data handling using arrays and structures, along with menu-driven program design in C.

###Functional Requirements:

1. Add Event

The system should allow the user to enter event details: name, date, and venue.

The event should be stored in an array of structures.

The system must prevent adding more than MAX events.



2. Display All Events

The system should display all stored events in a readable format.

If no events exist, it should show a message.



3. Search Event

The system should allow searching for an event by its name.

If found, it should display the complete event details.

If not found, it should show an appropriate message.



4. Menu-Driven Operation

The program should show a menu repeatedly until the user chooses to exit.

Input should be validated for incorrect menu choices.



5. Exit Program

The program should terminate safely when the user selects Exit.

###Features:

Add events (up to 50)

Users can enter event name, date, and venue which get stored in a structure array.

View all events

Displays each event in a formatted list.

Search event by name

Allows users to find specific event details quickly.

User-friendly menu

A simple and interactive text-based interface.

In-memory storage

All data is stored in runtime using arrays (no files).

###How to Run the Project:

Steps:

1. Copy the full C code into a file named:

event_management.c


2. Open a terminal / CMD where the file is saved.


3. Compile the program using GCC:

gcc event_management.c -o event


4. Run the program:

./event      (on Linux/Mac)
event.exe    (on Windows)

5. Follow the on-screen menu to:

Add Events

Display Events

Search Events

Exit.

###Screenshots:

since this is a consloe-based program,here are sample screenshots reprensented as terminal output:

Screenshot 1: Main Menu


<img width="254" height="68" alt="Screenshot 2025-11-24 at 9 37 24 PM" src="https://github.com/user-attachments/assets/263c4991-a5c0-456a-b41c-0c43aaf6a5c8" />


Screenshot 2: Adding an Event


<img width="305" height="73" alt="Screenshot 2025-11-24 at 9 43 53 PM" src="https://github.com/user-attachments/assets/f35f8166-13b2-44e9-99e4-2a30e563f5b8" />


Screenshot 3: Displaying Events


<img width="204" height="72" alt="Screenshot 2025-11-24 at 9 46 20 PM" src="https://github.com/user-attachments/assets/ed828cf4-3e48-4d28-8fef-d9e250c1ebc1" />


Screenshot 4: Searching Event


<img width="292" height="99" alt="Screenshot 2025-11-24 at 9 49 21 PM" src="https://github.com/user-attachments/assets/57e665ab-2e08-4e91-a44f-e3233e1b6f76" />

Screenshot 5: Exit


<img width="393" height="115" alt="Screenshot 2025-11-24 at 9 51 04 PM" src="https://github.com/user-attachments/assets/55a4b6e9-a34d-4fc9-a484-96e05ef6c0d2" />
















