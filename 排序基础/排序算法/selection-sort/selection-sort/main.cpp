//
//  main.cpp
//  selection-sort
//
//  Created by 王潇 on 2021/1/12.
//

#include <iostream>
//  在C++11之前,swap在algorithm这个库中
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i=0; i<n; i++) {

        //  寻找 [i, n) 区间里的最小值
        int minIndex = i;

        for(int j= i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;

                swap(arr[i], arr[minIndex]);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int a[10] = {10, 9, 8 ,7, 6, 5, 4, 3, 2, 1};
    selectionSort(a, 10);
    for (int i=0; i<10; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
