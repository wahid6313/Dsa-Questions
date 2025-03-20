#include<iostream>
#include<string>

using namespace std;

class Student {
    public: 
    string name;
    int age;

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    };

};

int main() {
    
    Student s1("wahid", 20);

}