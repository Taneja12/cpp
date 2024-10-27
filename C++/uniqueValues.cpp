#include <bits/stdc++.h>
using namespace std;

void UniqueValues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // Check for duplicates
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isDuplicate = true;  // Mark as duplicate
                break;
            }
        }

        // If not a duplicate, print the element
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void intersection(int arr1[],int size1,int arr2[],int size2){
    for(int i=0;i<size1;i++){
      for(int j=0;j<size2;j++){
        if(arr1[i] == arr2[j]){
          cout<<arr1[i]<<" ";
        }
      }
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,2,1};
    UniqueValues(arr, 7);
    cout<<endl;
    intersection(arr1,4,arr2,3);
    return 0;
}
