#ifndef TASK_H
#define TASK_H

#include <iostream>
using namespace std;

class Task {
protected:
    int id;
    string title;
    bool completed;

public:
    Task(int id, string title);
    virtual ~Task();   // important for inheritance

    virtual void display();
    void markComplete();
    bool isCompleted();

    int getId();
    string getTitle();
};

#endif
