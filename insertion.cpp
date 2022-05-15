#include <iostream>
using namespace std;

int main() {

    
int arr[] = {7,2,4,1,5,3};
int n = size(arr);

    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        int hole = i;

        while (hole > 0 && arr[hole-1] > value)
        {
            arr[hole] = arr[hole-1]; 
            hole = hole-1;
        }
          arr[hole] = value;   
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    

    return 0;
}