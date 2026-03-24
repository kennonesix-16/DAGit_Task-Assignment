#include "TaskManager.h"
#include <iostream>
using namespace std;

void TaskManager::addAssignment() {
    int id = assignments.size() + 1;

    string title, subject, deadline;

    cin.ignore(); // clear buffer

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter subject: ";
    getline(cin, subject);

    cout << "Enter deadline: ";
    getline(cin, deadline);

    Assignment a(id, title, subject, deadline);
    assignments.push_back(a);

    cout << "Assignment added successfully!\n";
}

void TaskManager::listAssignments() {
    if (assignments.empty()) {
        cout << "No assignments found.\n";
        return;
    }

    cout << "\n--- Assignment List ---\n";
    for (auto &a : assignments) {
        a.display();
    }
}

void TaskManager::markAssignmentComplete(int id) {
    for (auto &a : assignments) {
        if (a.getId() == id) {
            a.markComplete();
            cout << "Marked as completed!\n";
            return;
        }
    }

    cout << "Assignment not found.\n";
}

vector<Assignment>& TaskManager::getAssignments() {
    return assignments;
}
