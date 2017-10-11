//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "Student.h"


void Student::copy(const Student& other) {
    mystrcpy(this->firstName, other.firstName);
    mystrcpy(this->lastName, other.lastName);
    for (int i = 0; i < EGN_SIZE; ++i) {
       this->EGN[i] = other.EGN[i];
    }
    this->averageGrade = other.averageGrade;
    this->numberOfCoursesTaken = other.numberOfCoursesTaken;
}

void Student::destroy() {
    delete[] this->firstName;
    delete[] this->lastName;
}

Student::Student() {
    this->firstName = nullptr;
    this->lastName = nullptr;
    this->averageGrade = DEFAULT_AVERAGE_GRADE;
    this->numberOfCoursesTaken = DEFAULT_NUM_OF_COURSES_TAKEN;
}

Student::Student(const char* firstName, const char* lastName, const int* EGN, double averageGrade, int numberOfCoursesTaken) {
    mystrcpy(this->firstName, firstName);
    mystrcpy(this->lastName, lastName);
    for (int i = 0; i < EGN_SIZE; ++i) {
        this->EGN[i] = EGN[i];
    }
    this->averageGrade = averageGrade;
    this->numberOfCoursesTaken = numberOfCoursesTaken;
}

Student::Student(const Student& other) {
    copy(other);
}

Student& Student::operator=(const Student& other) {
    if(this != &other) {
        destroy();
        copy(other);
    }
    return *this;
}

Student::~Student() {
    destroy();
}

const char *Student::getFirstName() const {
    return this->firstName;
}

const char *Student::getLastName() const {
    return this->lastName;
}

const int *Student::getEGN() const {
    return this->EGN;
}

double Student::getAverageGrade() const {
    return this->averageGrade;
}

int Student::getNumberOfCoursesTaken() const {
    return this->numberOfCoursesTaken;
}

void Student::setFirstName(const char* firstName) {
    delete[] this->firstName;
    mystrcpy(this->firstName, firstName);
}

void Student::setLastName(const char* lastName) {
    delete[] this->lastName;
    mystrcpy(this->lastName, lastName);
}

void Student::setEGN(const int* EGN) {
    for (int i = 0; i < EGN_SIZE; ++i) {
       this->EGN[i] = EGN[i];
    }
}

void Student::setAverageGrade(double averageGrade) {
    if(averageGrade < MIN_GRADE || averageGrade > MAX_GRADE) {
        throw "Invalid average grade!";
    }

    this->averageGrade = averageGrade;
}

void Student::setNumberOfCoursesTaken(int numberOfCoursesTaken) {
    if(numberOfCoursesTaken < 0) {
        throw "Number of courses taken cannot be a negative number!";
    }

    this->numberOfCoursesTaken = numberOfCoursesTaken;
}

Student* Student::clone() const {
    return new Student(*this);
}
