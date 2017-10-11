//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "JuniorStudent.h"

JuniorStudent::JuniorStudent() : Student() {
    this->hopeExists = false;
}

JuniorStudent::JuniorStudent(const char* firstName, const char* lastName, int* EGN, double averageGrade, int numberOfCoursesTaken, bool hopeExists) : Student(firstName, lastName, EGN, averageGrade, numberOfCoursesTaken){
   this->hopeExists = hopeExists;
}

JuniorStudent::JuniorStudent(const JuniorStudent& other) : Student(other) {
    this->hopeExists = hopeExists;
}

JuniorStudent &JuniorStudent::operator=(const JuniorStudent& other) {
    if(this != &other) {
        Student::operator=(other);
        this->hopeExists = hopeExists;
    }
    return *this;
}

JuniorStudent::~JuniorStudent() {
}

bool JuniorStudent::doesHopeExist() const {
    return this->hopeExists;
}

void JuniorStudent::setExistingHope(bool hopeExists) {
    this->hopeExists = hopeExists;
}

JuniorStudent* JuniorStudent::clone() const {
    return new JuniorStudent(*this);
}
