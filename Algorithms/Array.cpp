#include<iostream>
using namespace std;
int main()
{
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    cout << "The English vowel are: ";
    for (int i = 0; i < 5; i++)
    {
         cout << vowel[i] <<" ";
    }
    return 0;
}