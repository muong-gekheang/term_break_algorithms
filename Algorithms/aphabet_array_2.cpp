#include<iostream>
using namespace std;
int main()
{
    int array_size= 10;
    char letter = 'a';
    char char_array[array_size];
    for(int i = 0; i<10;i++)
    {
        char_array[i]= letter;
        letter +=2;
        cout << char_array[i] << " ";
    }
    return 0;
}