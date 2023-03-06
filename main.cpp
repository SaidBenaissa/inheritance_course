#include <iostream>
#include <string>

using namespace std;

// Define a Person class with a constructor method that initializes the firstName and lastName properties,
// and a getFullName method that returns the full name
class Person {
protected:
    string firstName;
    string lastName;

public:
    // Constructor that takes two arguments to initialize the firstName and lastName properties
    Person(const string& fName, const string& lName) : firstName(fName), lastName(lName) {}

    // Method that returns the full name of the person
    string getFullName() const {
        return firstName + " " + lastName;
    }
};

// Define an Employee class that inherits from the Person class using the "public" access specifier
class Employee : public Person {
private:
    string position;
    string firstName = "John";

public:
    // Constructor that takes three arguments, including the firstName and lastName arguments that are passed to the
    // constructor of the parent class using the initialization list syntax, and the position argument that is used to
    // initialize the position property
    Employee(const string& fName, const string& lName, const string& pos) : Person(fName, lName), position(pos) {}

    // Method that returns the position of the employee
    string getPosition() const {
        return position;
    }
};

int main() {
    // Create a new instance of the Employee class with the firstName "John", the lastName "Doe", and the position "Manager"
    Employee employee("John", "Doe", "Manager");

    // Call the getFullName method of the Person class to print the full name of the employee
    cout << employee.getFullName() << endl; // John Doe

    // Call the getPosition method of the Employee class to print the position of the employee
    cout << employee.getPosition() << endl; // Manager

    return 0;
}
