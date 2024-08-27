#include<iostream>
using namespace std;

int main()
{
    char alphabet[26];
    char letter = 'a';
    for(int i = 0; i<26; i++)
    {
        alphabet[i]= letter;
        letter++;
    }
    for(int i = 0; i<26; i++)
    { 
        cout << alphabet[i] << " ";
    }
    return 0;
}