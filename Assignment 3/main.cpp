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

int main ()
{
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

    sum = addArray( array, 5 );
 
    cout << "The sum of the numbers in the array is:  " << sum << endl;
    
    int mult = multiArray(array, 5);
    cout << "The numbers inside of the array multiplied is: " << mult << endl;
    
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
//Maybe this time it will work, sorry for the random lines. As you can tell I slightly struggled
