#include <iostream>
#include "TaskManager.h"
#include "FileStorage.h"

using namespace std;

int main() {
    TaskManager manager;
    FileStorage storage("data/assignments.txt");

    storage.loadAssignments(manager);

    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Assignment\n";
        cout << "2. List Assignments\n";
        cout << "3. Mark Complete\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addAssignment();
                break;

            case 2:
                manager.listAssignments();
                break;

            case 3: {
                int id;
                cout << "Enter assignment ID: ";
                cin >> id;
                manager.markAssignmentComplete(id);
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

        storage.saveAssignments(manager);

    } while (choice != 4);

    return 0;
}
