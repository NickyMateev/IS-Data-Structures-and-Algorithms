//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "SophmoreStudent.h"

SophmoreStudent::SophmoreStudent() : Student() {
    this->alreadyDepressed = true;
}

SophmoreStudent::SophmoreStudent(const char* firstName, const char* lastName, int* EGN, double averageGrade, int numberOfCoursesTaken, bool alreadyDepressed) : Student(firstName, lastName, EGN, averageGrade, numberOfCoursesTaken){
    this->alreadyDepressed = alreadyDepressed;
}

SophmoreStudent::SophmoreStudent(const SophmoreStudent& other) : Student(other) {
    this->alreadyDepressed = other.alreadyDepressed;
}

SophmoreStudent &SophmoreStudent::operator=(const SophmoreStudent& other) {
    if(this != &other) {
        Student::operator=(other);
        this->alreadyDepressed = other.alreadyDepressed;
    }
    return *this;
}

SophmoreStudent::~SophmoreStudent() {
}

bool SophmoreStudent::isAlreadyDepressed() const {
    return this->alreadyDepressed;
}

void SophmoreStudent::setAlreadyDepressed(bool alreadyDepressed) {
    this->alreadyDepressed = alreadyDepressed;
}

SophmoreStudent* SophmoreStudent::clone() const {
    return new SophmoreStudent(*this);
}
