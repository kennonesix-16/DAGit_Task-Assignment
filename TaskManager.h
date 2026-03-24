#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Assignment.h"
using namespace std;

class TaskManager {
private:
    vector<Assignment> assignments;

public:
    void addAssignment();
    void listAssignments();
    void markAssignmentComplete(int id);

    vector<Assignment>& getAssignments();

    friend class FileStorage; // allow file access
};

#endif
