//
// Created by Mateev, Nikolay on 10/10/17.
//

#ifndef TASK1_SENIORSTUDENT_H
#define TASK1_SENIORSTUDENT_H

#include "Student.h"

class SeniorStudent : public Student {
private:
    bool graduationPossibility;
public:
    SeniorStudent();
    SeniorStudent(const char*, const char*, int*, double, int, bool);
    SeniorStudent(const SeniorStudent&);
    SeniorStudent& operator=(const SeniorStudent&);
    ~SeniorStudent();

    bool isThereAnyGraduationPossibility() const;
    void setGraduatationPossibility(bool);

    virtual SeniorStudent* clone() const;
};


#endif //TASK1_SENIORSTUDENT_H
