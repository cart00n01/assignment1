#include<bits/stdc++.h>

using namespace std;

int getMax(int [],int);
int getMin(int [],int);

void getArray(int arr[],int size) {
    cout << "Enter an array" << endl ;
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
}
int main()
{
    int size,max,min;
    cout << "Enter the size of the array:" << endl ;
    cin >> size ;
    int arr[100];
    getArray(arr,size);
    max=getMax(arr,size);
    cout << "Max nubmer in array is " << max << endl;
    min=getMin(arr,size);
    cout << "Min nubmer in array is " << min ;
}

int getMax(int arr[],int size) {
    int max_num=INT_MIN;
    for(int i=0;i<size;i++) {
        max_num = max(max_num, arr[i]) ;
    }
    return max_num;
}

int getMin(int arr[],int size) {
    int min_num=INT_MAX;
    for(int i=0;i<size;i++) {
        min_num = min(min_num,arr[i]);
    }
    return min_num;
}