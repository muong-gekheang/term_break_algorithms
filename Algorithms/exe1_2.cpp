#include<iostream>
using namespace std;
int multiply_by_index(int first_array[], int second_array[], int size)
{
    int result_array[3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        result_array[i] = first_array[i] * second_array[i];
        cout << result_array[i] << " ";
        sum += result_array[i];
    }
    return sum;
}
int main()
{
    int size = 3;
    int first_array[size] = {1,3,5};
    int second_array[size] = {2,4,6};
    int result;
    result = multiply_by_index(first_array, second_array, size);
    cout << "The sum is: " << result << endl;
    return 0;
} 
