#ifndef FILESTORAGE_H
#define FILESTORAGE_H

#include "TaskManager.h"
#include <string>
using namespace std;

class FileStorage {
private:
    string filePath;

public:
    FileStorage(string path);

    void saveAssignments(TaskManager &manager);
    void loadAssignments(TaskManager &manager);
};

#endif
