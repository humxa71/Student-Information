#include "Student.h"

int main() {
    cout << "===== Student Information System (SIS) =====\n";
    cout << "Managing student records efficiently...\n\n";

    // Object 1 using default constructor
    cout << "Adding Student (Default Constructor)\n";
    Student s1;
    s1.displayInfo();
    s1.calculateGrade();

    // Object 2 - using parameterized constructor
    cout << "\nAdding Student (Parameterized Constructor)\n";
    Student s2("Ali Khan", 20, 101, 3.7);
    s2.displayInfo();
    s2.calculateGrade();

    // Object 3 - using constructor with default arguments
    cout << "\nAdding Student (Constructor with Default Values)\n";
    Student s3("Sara Ahmed", 102);
    s3.displayInfo();
    s3.calculateGrade();

    // Object 4 - using one setter method
    cout << "\nUpdating Student Record (Using Setter Method)\n";
    Student s4;
    s4.setStudentInfo("Usman Raza", 22, 103, 2.8);
    s4.displayInfo();
    s4.calculateGrade();

    cout << "\nAll student records processed successfully.\n";
    cout << "=============================================\n";
    cout << "System shutting down...\n";

    return 0;
}
