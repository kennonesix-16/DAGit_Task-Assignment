#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "Task.h"

class Assignment : public Task {
private:
    string subject;
    string deadline;

public:
    Assignment(int id, string title, string subject, string deadline);

    void display() override;

    string getSubject();
    string getDeadline();
};

#endif
