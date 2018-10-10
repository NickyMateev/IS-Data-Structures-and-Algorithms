//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "SeniorStudent.h"

SeniorStudent::SeniorStudent() : Student() {
    this->graduationPossibility = true;
}

SeniorStudent::SeniorStudent(const char* firstName, const char* lastName, int* EGN, double averageGrade, int numberOfCoursesTaken, bool graduationPossibility) : Student(firstName, lastName, EGN, averageGrade, numberOfCoursesTaken) {
    this->graduationPossibility = graduationPossibility;
}

SeniorStudent::SeniorStudent(const SeniorStudent& other) : Student(other) {
    this->graduationPossibility = graduationPossibility;
}

SeniorStudent &SeniorStudent::operator=(const SeniorStudent& other) {
    if(this != &other) {
        Student::operator=(other);
        this->graduationPossibility = graduationPossibility;
    }
    return *this;
}

SeniorStudent::~SeniorStudent() {
}

bool SeniorStudent::isThereAnyGraduationPossibility() const {
    return this->graduationPossibility;
}

void SeniorStudent::setGraduatationPossibility(bool graduationPossibility) {
    this->graduationPossibility = graduationPossibility;
}

SeniorStudent* SeniorStudent::clone() const {
    return new SeniorStudent(*this);
}
