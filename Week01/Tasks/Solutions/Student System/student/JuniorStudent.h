//
// Created by Mateev, Nikolay on 10/10/17.
//

#ifndef TASK1_JUNIORSTUDENT_H
#define TASK1_JUNIORSTUDENT_H

#include "Student.h"

class JuniorStudent : public Student {
private:
    bool hopeExists;
public:
    JuniorStudent();
    JuniorStudent(const char*, const char*, int*, double, int, bool);
    JuniorStudent(const JuniorStudent&);
    JuniorStudent& operator=(const JuniorStudent&);
    ~JuniorStudent();

    bool doesHopeExist() const;
    void setExistingHope(bool);

    virtual JuniorStudent* clone() const;
};


#endif //TASK1_JUNIORSTUDENT_H
