#include<iostream>
using namespace std;
int main()
{
    int size = 8;
    int array[size];
    array[0] = 1;
    array[1] = 1;

    for (int i = 2; i < size; i++)
    {
        array[i] = array[ i - 1] + array [i - 2];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1)
        {
            cout <<",";
        }
        
    }
    return 0;
} 