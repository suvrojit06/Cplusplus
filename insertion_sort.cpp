#include <bits/stdc++.h>

int main()  
{  
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter elements: ";
    
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int i,j;
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
    
    return 0;  
}  
