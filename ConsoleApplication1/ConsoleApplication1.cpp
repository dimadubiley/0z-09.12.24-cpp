#include <fstream>
#include <iostream>
using namespace std;

class Student
{
    string name;
    string surname;
    int age;
public:
    Student() = default;
    Student(const char* n, const char* sur, int a)
    {
        name = n;
        surname = sur;
        age = a;
    }
    void Print()
    {
        cout << "Name: " << name << "\n";
        cout << "Surname: " << surname << "\n";
        cout << "Age: " << age << "\n";
    }
    void SaveFile()
    {
        ofstream out("dz.txt");
        out << name << "\n";
        out << surname << "\n";
        out << age << "\n";
    }
    void ReadFile()
    {
        ifstream read("dz.txt");
    }

};