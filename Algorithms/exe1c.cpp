#include<iostream>
using namespace std;
int main()
{
    int size = 5;
    int array[size] = {1,2,3,4,5};
    int first_number = 1;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "," << array[i];
        if (i != size - 1)
        {
            cout << ",";
        }
    }
    
    return 0;
}