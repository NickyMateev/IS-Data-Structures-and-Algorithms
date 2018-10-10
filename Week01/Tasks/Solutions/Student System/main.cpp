#include <iostream>
#include <vector>
#include "student/Student.h"
#include "service/StudentService.h"

const int MAX_ARRAY_LENGTH = 30;

void addStudent(StudentService& studentService) {
    char userInput[MAX_ARRAY_LENGTH];
    int EGN[EGN_SIZE];
    double averageGrade;
    int numberOfCoursesTaken;

    Student newStudent;

    std::cout << "First name: ";
    std::cin >> userInput;
    newStudent.setFirstName(userInput);

    std::cout << "Last name: ";
    std::cin >> userInput;
    newStudent.setLastName(userInput);

    std::cout << "EGN: ";
    std::cin >> userInput;
    for (int i = 0; i < EGN_SIZE; ++i) {
        EGN[i] = userInput[i] - '0';
    }
    newStudent.setEGN(EGN);

    std::cout << "Average grade: ";
    std::cin >> averageGrade;
    newStudent.setAverageGrade(averageGrade);

    std::cout << "Number of courses taken: ";
    std::cin >> numberOfCoursesTaken;
    newStudent.setNumberOfCoursesTaken(numberOfCoursesTaken);

    try {
        studentService.addStudent((&newStudent));
        std::cout << "Student successfully added!" << std::endl;
    } catch (...) {
        std::cout << "An error occurred while trying to add new student! Operation failed." << std::endl;
    }
}

void removeStudent(StudentService& studentService) {
    char userInput[MAX_ARRAY_LENGTH];
    int EGN[EGN_SIZE];

    std::cout << "EGN of student to remove: ";
    std::cin >> userInput;
    for (int i = 0; i < EGN_SIZE; ++i) {
        EGN[i] = userInput[i] - '0';
    }

    try {
        if(studentService.removeStudent(EGN)) {
            std::cout << "Student successfully removed!" << std::endl;
        } else {
            std::cout << "Student doesn't exist in the system!" << std::endl;
        }
    } catch (...) {
        std::cout << "An error occurred while trying to remove student! Operation failed." << std::endl;
    }
}

void findStudentByEGN(StudentService& studentService) {
    char userInput[MAX_ARRAY_LENGTH];
    int EGN[EGN_SIZE];

    std::cout << "EGN of student to find: ";
    std::cin >> userInput;
    for (int i = 0; i < EGN_SIZE; ++i) {
        EGN[i] = userInput[i] - '0';
    }

    Student* student = studentService.findStudentByEGN(EGN);
    if(student) {
        std::cout << "  Name: " << student->getFirstName() << " "  << student->getLastName() << std::endl;
        std::cout << "  Average grade: " << student->getAverageGrade() << std::endl;
        std::cout << "  Courses taken: " << student->getNumberOfCoursesTaken()  << std::endl;
    } else {
        std::cout << "Student does not exist in the system." << std::endl;
    }
}

void findStudentByName(StudentService& studentService) {
    char firstName[MAX_ARRAY_LENGTH], lastName[MAX_ARRAY_LENGTH];
    std::cout << "Full name: ";
    std::cin >> firstName >> lastName;
    Student* student = studentService.findStudentByName(firstName, lastName);

    if(student) {
        std::cout << "  Name: " << firstName << " "  << lastName << std::endl;
        std::cout << "  Average grade: " << student->getAverageGrade() << std::endl;
        std::cout << "  Courses taken: " << student->getNumberOfCoursesTaken()  << std::endl;
    } else {
        std::cout << "Student does not exist in the system." << std::endl;
    }
}

void getStudentsByGrade(StudentService& studentService, bool ascending) {
    std::vector<Student*> students = ascending ? studentService.getStudentsByGradeAsc() : studentService.getStudentsByGradeDesc();
    Student* currStudent = nullptr;

    if(students.empty()) {
        std::cout << "No students in the system." << std::endl;
        return;
    }

    for (int i = 0; i < students.size(); ++i) {
        currStudent = students.at(i);
        std::cout << currStudent->getFirstName() << " " << currStudent->getLastName() << ", "  << currStudent->getAverageGrade() << std::endl;
    }
}

void printHelp() {
    std::cout << "***********************************" << std::endl;
    std::cout << std::endl;

    std::cout << "1) - Add student" << std::endl;
    std::cout << "2) - Remove student" << std::endl;
    std::cout << "3) - Find student by EGN" << std::endl;
    std::cout << "4) - Find student by name" << std::endl;
    std::cout << "5) - Get students by grade(ascending order)" << std::endl;
    std::cout << "6) - Get students by grade(descending order)" << std::endl;
    std::cout << "7) - Print help" << std::endl;
    std::cout << "8) - Exit application" << std::endl;

    std::cout << std::endl;
    std::cout << "***********************************" << std::endl;
}

void startApplication() {
    StudentService studentService;

    int userChoice = -1;
    bool stillRunning = true;

    std::cout << "Welcome to the Student System application!" << std::endl;
    printHelp();
    while(stillRunning) {
        std::cout << "Input: ";
        std::cin >> userChoice;
        switch(userChoice) {
            case 1: addStudent(studentService);
                    break;
            case 2: removeStudent(studentService);
                    break;
            case 3: findStudentByEGN(studentService);
                    break;
            case 4: findStudentByName(studentService);
                    break;
            case 5: getStudentsByGrade(studentService, true);
                    break;
            case 6: getStudentsByGrade(studentService, false);
                    break;
            case 7: printHelp();
                    break;
            case 8: stillRunning = false;
                    std::cout << "Stopping application..." << std::endl;
                    break;
            default: std::cout << "Invalid command!" << std::endl;
                     break;
        }
    }

    std::cout << "Application successfully stopped." << std::endl;
}

int main(){
    startApplication();
    return 0;
}