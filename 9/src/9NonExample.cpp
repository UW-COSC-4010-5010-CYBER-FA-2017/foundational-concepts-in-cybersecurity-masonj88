#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//This implemnentation found at http://www.geeksforgeeks.org/insertion-sort/
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

//This following code (swap, bubbleSort, and pritnArray) found at http://www.geeksforgeeks.org/bubble-sort/
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    
}



int main(int argc, char *argv[]) {

    if(!argv[1])
    {cout << "No sort method specified, exiting" << endl;
    return 0;}

    int arrayToBeSorted[] = {4, 14, 49, 12, 90, 31, 34, 10, 64, 81, 11, 76, 24};
    int n = 13;

    if(std::string(argv[1]) == "bubble")
    {
        bubbleSort(arrayToBeSorted, n);
        printArray(arrayToBeSorted, n);
    }
    else if(std::string(argv[1]) == "insertion")
    {
        insertionSort(arrayToBeSorted, n);
        printArray(arrayToBeSorted, n);
    }
    else if(std::string(argv[1]) == "standard")
    {
        sort(arrayToBeSorted, arrayToBeSorted + n);
        printArray(arrayToBeSorted, n);
    }
    else
    {
        cout << argv[1];
        cout << "No sort method specified, exiting" << endl;
        return 0;
    }




return 0;


}