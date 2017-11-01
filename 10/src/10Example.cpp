#include <iostream>
#include <string>
#include <algorithm>

using namespace std;



//This function found at http://www.geeksforgeeks.org/bubble-sort/
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    
}



int main() {


    int arrayToBeSorted[] = {4, 14, 49, 12, 90, 31, 34, 10, 64, 81, 11, 76, 24};
    int n = 13;

    sort(arrayToBeSorted, arrayToBeSorted + n);
    printArray(arrayToBeSorted, n);
    




return 0;


}