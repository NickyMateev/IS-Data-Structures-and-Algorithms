//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "StudentService.h"

void StudentService::destroy() {
    for (int i = 0; i < this->students.size(); ++i) {
        delete this->students.at(i);
    }
}

bool StudentService::isEGNEqual(const int* egn1, const int* egn2) const {
    for (int i = 0; i < EGN_SIZE; ++i) {
        if(egn1[i] != egn2[i]) {
            return false;
        }
    }
    return true;
}

void StudentService::swapStudents(Student*& student1, Student*& student2) const {
    Student* temp = student1;
    student1 = student2;
    student2 = temp;
}

StudentService::StudentService() {
}

StudentService::~StudentService() {
    destroy();
}

void StudentService::addStudent(Student* student) {
    this->students.push_back(student->clone());
}

bool StudentService::removeStudent(const int* EGN) {
    for (int i = 0; i < this->students.size(); ++i) {
        if(isEGNEqual(this->students.at(i)->getEGN(), EGN)) {
            delete this->students.at(i);
            this->students.erase(this->students.begin() + i);
            return true;
        }
    }

    return false;
}

Student* StudentService::findStudentByEGN(const int* EGN) const {
    for (int i = 0; i < this->students.size(); ++i) {
        if(isEGNEqual(this->students.at(i)->getEGN(), EGN)) {
            return this->students.at(i);
        }
    }
    return nullptr;
}

Student* StudentService::findStudentByName(const char* firstName, const char* lastName) const {
    for (int i = 0; i < this->students.size(); ++i) {
        if(!strcmp(this->students.at(i)->getFirstName(), firstName) && !strcmp(this->students.at(i)->getLastName(), lastName)) {
            return this->students.at(i);
        }
    }
    return nullptr;
}

std::vector<Student*> StudentService::getStudentsByGradeAsc() const {
    std::vector<Student*> studentsAsc = this->students;
    int vectorSize = studentsAsc.size();

    for (int i = 0; i < vectorSize - 1; ++i) {
        for (int j = 0; j < vectorSize - i - 1; ++j) {
            if(studentsAsc.at(j)->getAverageGrade() > studentsAsc.at(j + 1)->getAverageGrade()) {
                swapStudents(studentsAsc.at(j), studentsAsc.at(j + 1));
            }
        }
    }
    return studentsAsc;
}

std::vector<Student*> StudentService::getStudentsByGradeDesc() const {
    std::vector<Student*> studentsDesc = this->students;
    int vectorSize = studentsDesc.size();

    for (int i = 0; i < vectorSize - 1; ++i) {
        for (int j = 0; j < vectorSize - i - 1; ++j) {
            if(studentsDesc.at(j)->getAverageGrade() < studentsDesc.at(j + 1)->getAverageGrade()) {
                swapStudents(studentsDesc.at(j), studentsDesc.at(j + 1));
            }
        }
    }

    return studentsDesc;
}
