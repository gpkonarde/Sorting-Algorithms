#include <iostream>
using namespace std;

// void selectionsort(int A[],int n) {
    
// }

int main() {
    int A[] = {2,4,3,1,6,5};
    int n = size(A);
    // selectionsort(A,6);
       for (int i = 0; i < n-1; i++)
    {
        int iMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[i] < A[iMin])
            {
                iMin = j;
            }
            int  temp = A[i];
            A[i] = A[iMin];
            A[iMin] = temp;
        }   
    }
        for (int i = 0; i < n; i++)
        {
            std::cout << A[i] << " ";
            cout << endl;
        }
        
     return 0;   
}