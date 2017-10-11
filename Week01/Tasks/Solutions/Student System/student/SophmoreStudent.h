//
// Created by Mateev, Nikolay on 10/10/17.
//

#ifndef TASK1_SOPHMORESTUDENT_H
#define TASK1_SOPHMORESTUDENT_H


#include "Student.h"

class SophmoreStudent : public Student {
private:
    bool alreadyDepressed;
public:
    SophmoreStudent();
    SophmoreStudent(const char*, const char*, int*, double, int, bool);
    SophmoreStudent(const SophmoreStudent&);
    SophmoreStudent& operator=(const SophmoreStudent&);
    ~SophmoreStudent();

    bool isAlreadyDepressed() const;
    void setAlreadyDepressed(bool);

    virtual SophmoreStudent* clone() const;
};


#endif //TASK1_SOPHMORESTUDENT_H
