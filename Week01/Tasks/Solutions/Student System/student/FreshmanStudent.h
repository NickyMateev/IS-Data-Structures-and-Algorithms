//
// Created by Mateev, Nikolay on 10/10/17.
//

#ifndef TASK1_FRESHMANSTUDENT_H
#define TASK1_FRESHMANSTUDENT_H


#include "Student.h"

class FreshmanStudent : public Student {
private:
    char* highschoolName;
    double averageHighschoolGrade;

    void copy(const FreshmanStudent&);
    void destroy();
public:
    FreshmanStudent();
    FreshmanStudent(const char*, const char*, int*, double, int, const char*, double);
    FreshmanStudent(const FreshmanStudent&);
    FreshmanStudent& operator=(const FreshmanStudent&);
    ~FreshmanStudent();

    const char* getHighschoolName() const;
    double getAverageHighschoolGrade() const;

    void setHighschoolName(const char*);
    void setAverageHighschoolGrade(double);

    virtual FreshmanStudent* clone() const;
};


#endif //TASK1_FRESHMANSTUDENT_H
