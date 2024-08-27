#include<iostream>
using namespace std;
int main()
{
    int array[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
           if(j <= i)
           {
            array[i][j] = 1;
           }
           else{
            array[i][j] = 0;
           }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
           cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}