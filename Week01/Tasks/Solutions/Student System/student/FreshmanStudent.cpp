//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "FreshmanStudent.h"

void FreshmanStudent::copy(const FreshmanStudent& other) {
    mystrcpy(this->highschoolName, other.highschoolName);
    this->averageHighschoolGrade = other.averageHighschoolGrade;
}

void FreshmanStudent::destroy() {
    delete[] this->highschoolName;
}

FreshmanStudent::FreshmanStudent() : Student() {
    this->highschoolName = nullptr;
    this->averageHighschoolGrade = DEFAULT_AVERAGE_GRADE;
}

FreshmanStudent::FreshmanStudent(const char* firstName, const char* lastName, int* EGN, double averageGrade, int numberOfCoursesTaken, const char* highshoolName, double averageHighschoolGrade) : Student(firstName, lastName, EGN, averageGrade, numberOfCoursesTaken){
    mystrcpy(this->highschoolName, highshoolName);
    this->averageHighschoolGrade = averageHighschoolGrade;
}

FreshmanStudent::FreshmanStudent(const FreshmanStudent& other) : Student(other) {
    copy(other);
}

FreshmanStudent &FreshmanStudent::operator=(const FreshmanStudent& other) {
    if(this != &other) {
        Student::operator=(other);

        destroy();
        copy(other);
    }
    return *this;
}

FreshmanStudent::~FreshmanStudent() {
    destroy();
}

const char *FreshmanStudent::getHighschoolName() const {
    return this->highschoolName;
}

double FreshmanStudent::getAverageHighschoolGrade() const {
    return this->averageHighschoolGrade;
}

void FreshmanStudent::setHighschoolName(const char* highschoolName) {
    delete[] this->highschoolName;
    mystrcpy(this->highschoolName, highschoolName);
}

void FreshmanStudent::setAverageHighschoolGrade(double averageHighschoolGrade) {
    if(averageHighschoolGrade < MIN_GRADE || averageHighschoolGrade > MAX_GRADE) {
        throw "Invalid average grade!";
    }
    this->averageHighschoolGrade = averageHighschoolGrade;
}

FreshmanStudent* FreshmanStudent::clone() const {
    return new FreshmanStudent(*this);
}
