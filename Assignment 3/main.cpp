//
//  main.cpp
//  Assignment 3
//
//  Created by Tommy Boedecker on 9/13/23.
//

#include <iostream>
using namespace std;
 
int addArray(int arr[], int size);
int multiArray(int arr[], int size);
void reverseArray(int arr[], int size);
void printArray(int array[], int size);

int main ()
{
    //I integrated the functionality of part 6 from the get go in part 5, rather than having a static array.
    int size;
    
    cout << "Please enter the size of the array: ";
    cin >> size;
    
    int array[size];
    
    cout << "Please enter the numbers for the array at hand: ";
    for(int x = 0; x < size; x++)
    {
        cin >> array[x];
    }
    
    
    int sum;

    sum = addArray( array, size);
 
    cout << "The sum of the numbers in the array is:  " << sum << endl;
    
    int mult = multiArray(array, size);
    cout << "The numbers inside of the array multiplied is: " << mult << endl;
    
    reverseArray(array, size);
    printArray(array, size);
    
    return 0;
}

int addArray(int arr[], int size)
{
    int sum;
    sum = 0;

    for (int x = 0; x < size; x++)
    {
        sum += arr[x];
    }

    return sum;
}
int multiArray(int arr[], int size)
{
    int num = 1;
    
    for(int x = 0; x < size; x++)
    {
        num *= arr[x];
    }
    
    return num;
}
void reverseArray(int arr[], int size)
{
    reverse(arr, arr+size);
}
void printArray(int array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        cout << array[x] << endl;
    }
}
//These are some comments for part 10.
//The remember to declare the functions before Main for the synax to understand the functions themselves.
//That makes no sense what so ever but I guess I know what I mean afterall right?
