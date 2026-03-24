#include "FileStorage.h"
#include <fstream>
#include <sstream>

FileStorage::FileStorage(string path) {
    filePath = path;
}

void FileStorage::saveAssignments(TaskManager &manager) {
    ofstream file(filePath);

    for (auto &a : manager.assignments) {
        file << a.getId() << "|"
             << a.getTitle() << "|"
             << a.getSubject() << "|"
             << a.getDeadline() << "|"
             << a.isCompleted() << endl;
    }

    file.close();
}

void FileStorage::loadAssignments(TaskManager &manager) {
    ifstream file(filePath);

    if (!file.is_open()) {
        return; // no file yet
    }

    string line;

    while (getline(file, line)) {
        stringstream ss(line);

        string id, title, subject, deadline, completed;

        getline(ss, id, '|');
        getline(ss, title, '|');
        getline(ss, subject, '|');
        getline(ss, deadline, '|');
        getline(ss, completed, '|');

        Assignment a(stoi(id), title, subject, deadline);

        if (completed == "1") {
            a.markComplete();
        }

        manager.assignments.push_back(a);
    }

    file.close();
}
