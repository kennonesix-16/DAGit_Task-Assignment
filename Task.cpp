#include "Task.h"

Task::Task(int id, string title) {
    this->id = id;
    this->title = title;
    this->completed = false;
}

Task::~Task() {
    // nothing special, but needed (good practice)
}

void Task::display() {
    cout << id << ". " << title;
}

void Task::markComplete() {
    completed = true;
}

bool Task::isCompleted() {
    return completed;
}

int Task::getId() {
    return id;
}

string Task::getTitle() {
    return title;
}
