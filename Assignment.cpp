#include "Assignment.h"

Assignment::Assignment(int id, string title, string subject, string deadline)
    : Task(id, title) {

    this->subject = subject;
    this->deadline = deadline;
}

void Assignment::display() {
    cout << id << " | " << title
         << " | " << subject
         << " | " << deadline
         << " | " << (completed ? "Completed" : "Pending")
         << endl;
}

string Assignment::getSubject() {
    return subject;
}

string Assignment::getDeadline() {
    return deadline;
}
