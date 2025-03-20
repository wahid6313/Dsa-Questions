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
void change(Student* c) {
    c->age = 22;   //(*c).age = 22;
}

int main() {
    
    Student s1("wahid", 20);

    // cout<<s1.age<<endl;
    // change(&s1);
    // cout<<s1.age<<endl;

    Student* p = &s1;         //Student* p = &s1;
    cout<<p->name<<endl;      //cout<<(*p).name<<endl;
    p->name = "wahid ali";    //(*p).name = "wahid ali";
    cout<<s1.name<<endl;      //cout<<s1.name<<endl;
    
    
    



}