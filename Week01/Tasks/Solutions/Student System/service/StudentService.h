//
// Created by Mateev, Nikolay on 10/10/17.
//

#ifndef TASK1_STUDENTSERVICE_H
#define TASK1_STUDENTSERVICE_H
#include <vector>
#include "../student/Student.h"

class StudentService {
private:
    std::vector<Student*> students;

    void destroy();
    bool isEGNEqual(const int*, const int*) const;
    void swapStudents(Student*&, Student*&) const;
public:
    StudentService();
    ~StudentService();

    void addStudent(Student*);
    bool removeStudent(const int*);

    Student* findStudentByEGN(const int*) const;
    Student* findStudentByName(const char*, const char*) const;

    std::vector<Student*> getStudentsByGradeAsc() const;
    std::vector<Student*> getStudentsByGradeDesc() const;
};


#endif //TASK1_STUDENTSERVICE_H
