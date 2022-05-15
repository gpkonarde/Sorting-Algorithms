#include <iostream>
using namespace std;
 
 int main() {

     int arr[] = {2,7,4,1,5,3};
     int n = size(arr);

     for (int i = 0; i < n-1; i++)
     {
         for (int j = 0; j <= n-2; j++)
         {
             if (arr[j]>arr[j+1])
             {
                 swap(arr[j],arr[j+1]);
             }
         }
     }
     
     for (int i = 0; i < n; i++)
     {
         cout << arr[i] << " ";
         cout << endl;
     }

     return 0;
 }