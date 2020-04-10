#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void Max_heapify(int arr[], int len, int i) 
{ 
    int t = i;
    int left = 2*i+1;
    int right = 2*i+2; 
    if (left < len && arr[left] > arr[t]) 
        t = left; 
    if (right < len && arr[right] > arr[t]) 
        t = right;
    if (t != i) { 
        swap(arr[i], arr[t]);
        Max_heapify(arr, len, t); 
    } 
}

void Delete_root(int arr[], int length) 
{ 
    int last = arr[length - 1];
    arr[0] = last; 
    length = length - 1;
    Max_heapify(arr, length, 0); 
} 

void Print_Heap(int arr[], int length) 
{ 
    for (int i = 0; i < length; i++)
     {
     	for (int j = 0; j < (int)pow(2,i)&&j+(int)pow(2,i)<length; j++)
     	{
     		cout<<arr[j+(int)pow(2,i)-1]<<" ";
     	}
     	cout<<endl;
     } 
} 

void Build_heap(int arr[], int len) {
	int p = (len/2)-1;
	for (int i = p; i >= 0; i--)
		Max_heapify(arr, len, i);
}

int main() {
	int items[] = {28, 12, 17, 5, 7, 22, 13, 12, 4, 11, 16};
	int length = sizeof(items)/sizeof(items[0]);

	Build_heap(items, length);
	Print_Heap(items, length);
	Delete_root(items, length);
	return 0;
}