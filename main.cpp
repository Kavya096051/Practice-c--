#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string surname;
    string email;
    string password;

public:
    // Parameterized constructor
    Student(string n, string s, string e, string p) {
        name = n;
        surname = s;
        email = e;
        password = p;
    }

    // Function to display data if password is correct
    void display() {
        if (password == "1234") {
            cout << "Student Details:" << endl;
            cout << "Name     : " << name << endl;
            cout << "Surname  : " << surname << endl;
            cout << "Email    : " << email << endl;
        } else {
            cout << "Access Denied! Wrong password." << endl;
        }
    }
};

int main() {
    string name, surname, email, password;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Surname: ";
    cin >> surname;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Password: ";
    cin >> password;

    // Create object using parameterized constructor
    Student s1(name, surname, email, password);

    // Check and display details
    s1.display();

    return 0;
}