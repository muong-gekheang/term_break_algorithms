#include<iostream>
using namespace std;

void integer_counting(int array[], int size)
{
    int max_integer = 4;
    int counting[max_integer + 1] = {0};

    for (int i = 0; i < size; i++)
    {
        counting[array[i]]++;   
    }
    
    for (int i = 1; i <= max_integer; i++)
    {
        cout << "number " << i <<"appear " << counting[i] << "times" << endl;  
    }
    
}
int main()
{
    int size = 10;
    int array[size]= {1,2,2,3,3,3,4,4,4,4};
    integer_counting(array, size);

    return 0;
}