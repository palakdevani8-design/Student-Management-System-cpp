#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << roll << " " << name << " " << marks << endl;
    }
};

int main() {
    Student s[3];

    for(int i=0; i<3; i++) {
        s[i].input();
    }

    cout << "\nStudent Records:\n";
    for(int i=0; i<3; i++) {
        s[i].display();
    }

    return 0;
}
