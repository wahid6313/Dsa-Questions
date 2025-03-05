#include<iostream>
#include<string>
using namespace std;

int main() {

    string s;
    cout<<"enter the string: ";
    getline(cin, s);


    // string s = "raza";
    // int i = 0;
    // int count = 0;

    // while(s[i] != '\0') {
    //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
    //         count++;
    //         // cout<<s[i];
    //     }
    //     i++;
    // }
    // cout<<count<<endl;
    // cout<<s.length();

    int n = s.length();
    reverse(s.begin(), s.begin() + n/2);
    cout<<s<<endl;

    cout<<s.substr(n/2);


}