//
// Created by Mateev, Nikolay on 10/10/17.
//

#ifndef TASK1_STUDENT_H
#define TASK1_STUDENT_H
#include <iostream>
#include <assert.h>
#include "../helpers/myfunctions.h"

const int EGN_SIZE = 10;
const double DEFAULT_AVERAGE_GRADE = 4.0;
const double DEFAULT_NUM_OF_COURSES_TAKEN = 0;
const double MIN_GRADE = 2.0;
const double MAX_GRADE = 6.0;

class Student {
private:
    char* firstName;
    char* lastName;
    int EGN[EGN_SIZE];
    double averageGrade;
    int numberOfCoursesTaken;

    void copy(const Student&);
    void destroy();
public:
    Student();
    Student(const char*, const char*, const int*, double, int);
    Student(const Student&);
    Student& operator=(const Student&);
    ~Student();

    const char* getFirstName() const;
    const char* getLastName() const;
    const int* getEGN() const;
    double getAverageGrade() const;
    int getNumberOfCoursesTaken() const;

    void setFirstName(const char* firstName);
    void setLastName(const char* lastName);
    void setEGN(const int* EGN);
    void setAverageGrade(double averageGrade);
    void setNumberOfCoursesTaken(int numberOfCoursesTaken);

    virtual Student* clone() const;
};


#endif //TASK1_STUDENT_H
