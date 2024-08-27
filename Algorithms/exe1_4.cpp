#include<iostream>
using namespace std;

void counting(int array[][4], int row, int column)
{
    int max_number = 4;
    int counting[max_number + 1] ={0};   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            counting[array[i][j]]++;
        }
        
    }
    for (int i = 1; i < max_number; i++)
    {
        
        
            cout << "Number " << i << "appear" << counting[i] << "time" << endl;    
    }
}
int main()
{
    int row = 4;
    int column = 4;
    int array[row][column] =
        {
            {1,1,2,2},
            {3,3,3,4},
            {4,4,4,4},
            {2,3,1,4}
        };
    counting(array, row, column);
    
    return 0;
}