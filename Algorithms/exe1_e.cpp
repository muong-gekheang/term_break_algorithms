#include<iostream>
using namespace std;
int main()
{
    cout << "Program started" << endl;
    int number = 1;
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            array[i][j]= number;
            number++;
        }   
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;   
}
