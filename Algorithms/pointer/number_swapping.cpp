#include<iostream>
using namespace std;

void swap (int *num1, int *num2)
{
    int temp = 0;
    temp = *num1; 
    *num1 = *num2;
    *num2 = temp;
    cout << "after swapping the number are: " << *num1 << " and " << *num2 << endl;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    int *pointer_of_num_1 = &num1;
    int *pointer_of_num_2 = &num2;
    cout << "before swapping the number are " << num1 << " and " << num2 << endl;
    swap(pointer_of_num_1, pointer_of_num_2);


}