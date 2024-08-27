#include<iostream>
using namespace std;
typedef struct 
{
    string name;
    int age;
    string email;
} individual_info;

void student_info(individual_info p)
{
    cout << "Name: " << p.name << " Age: " << p.age << " Email: "<< p.email << endl;
}
int main()
{
    individual_info student_1 =
    {
        "Alice", 25, "alice@gmail.com"
    };
    individual_info student_2 =
    {
        "Bob", 29, "bob@gmail.com"
    };

    student_info(student_1);
    student_info(student_2);
    return 0;
}