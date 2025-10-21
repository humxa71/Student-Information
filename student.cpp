// Student.cpp
#include "Student.h"
#include<iostream>
using namespace std;

// Default constructor
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Default constructor called for student: " << name << endl;
}

// Parameterized constructor
Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized constructor called for student: " << name << endl;
}

// Constructor with default arguments
Student::Student(string n, int r) {
    name = n;
    rollNo = r;
    age = 18;     // Default age
    gpa = 2.5;    // Default GPA
    cout << "Constructor with default arguments called for student: " << name << endl;
}

// Destructor
Student::~Student() {
    cout << "Destructor called for student: " << name << endl;
}

// One setter method for all attributes
void Student::setStudentInfo(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
}

// Getter methods
string Student::getName() { return name; }
int Student::getAge() { return age; }
int Student::getRollNo() { return rollNo; }
float Student::getGPA() { return gpa; }

// Calculate and return grade (instead of printing)
string Student::calculateGrade() {
    if (gpa >= 3.5)
        return "A";
    else if (gpa >= 3.0)
        return "B";
    else if (gpa >= 2.5)
        return "C";
    else if (gpa >= 2.0)
        return "D";
    else
        return "F";
}

// Display all student information in one formatted line
void Student::displayInfo() {
    cout << "Name: " << name
        << " | Age: " << age
        << " | Roll No: " << rollNo
        << " | GPA: " << gpa
        << " | Grade: " << calculateGrade()
        << endl;
}
