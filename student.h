// Student.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    // Default constructor
    Student();

    // Parameterized constructor
    Student(string n, int a, int r, float g);

    // Constructor with default arguments
    Student(string n, int r);

    // Destructor
    ~Student();

    // setter method for all attributes
    void setStudentInfo(string n, int a, int r, float g);

    // Getter methods
    string getName();
    int getAge();
    int getRollNo();
    float getGPA();

    // Other methods
    void displayInfo();
    string calculateGrade();
};

