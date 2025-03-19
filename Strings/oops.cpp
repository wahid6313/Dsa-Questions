#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Student {
    public: 
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    };
};

int main() {
    
    Student s1("wahid", 20);
    cout<<s1.name<<" "<<s1.age<<endl;

}