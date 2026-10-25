#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int marks[5];
    int total;
    float average;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks of 5 subjects: ";
        total = 0;
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
        average = total / 5.0;
    }

    char getGrade() {
        if (average >= 90) return 'A';
        else if (average >= 75) return 'B';
        else if (average >= 50) return 'C';
        else return 'F';
    }

    void display() {
        cout << "\n--- Mark List ---\n";
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Total   : " << total << endl;
        cout << "Average : " << average << endl;
        cout << "Grade   : " << getGrade() << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
