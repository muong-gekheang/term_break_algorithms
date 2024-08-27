#include<iostream> 
using namespace std;
int main()
{
    int array_size = 10;
    int num = 1;
    int int_array[array_size];
    
    for(int i = 0; i<array_size; i++)
    {
       if(i%2 == 0)
       {
        int_array[i] = num;
        num++;
       }
       else if(i%2 == 1 )
       {
        int_array[i] = -num;
        num++;
       }
       if(i ==  9)
       {
        int_array[i] = int_array[i] * (-1);
       }
       cout << int_array[i] << " ";
    }

    return 0;
}