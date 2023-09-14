//
//  main.cpp
//  Assignment 3
//
//  Created by Tommy Boedecker on 9/13/23.
//

#include <iostream>
using namespace std;
 
int addArray(int arr[], int size);

int main ()
{
    int array[5] = {1000,5, 3, 17, 50};
    int sum;

    sum = addArray( array, 5 );
 
    cout << "The sum of the numbers in the array is:  " << sum << endl;

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
    //test commit
}
//These are some comments for part 10.
//The remember to declare the functions before Main for the synax to understand the functions themselves.
//That makes no sense what so ever but I guess I know what I mean afterall right?
