#include <bits/stdc++.h>
using namespace std;
// removing duplicate elements froms the unsorted array
void remove_duplicate(int arr[], int & n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                flag=0;
                break;
            }
        }
        if(flag)
        temp.push_back(arr[i]);
    }
    n=temp.size();
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main() {

	int arr[] = { 1,2,1,2,3,2,3,4,5,6,5 };
	int n = sizeof(arr) / sizeof(int);

	cout << "Input Array: ";
	for (int i = 0; i < n; ++i)	cout << arr[i] << ' ';
	cout << endl;

	remove_duplicate(arr, n);

	cout << "Output Array: ";
	for (int i = 0; i < n; ++i)	cout << arr[i] << ' ';
	cout << endl;

}
