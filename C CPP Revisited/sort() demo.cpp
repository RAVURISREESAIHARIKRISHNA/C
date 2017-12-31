#include<iostream>
#include<conio.h>
#include<algorithm> //for std::sort()
// Can also use <bits/stdc++.h>


using namespace std;

int main(){
	
	int n;
	cout<<"Enter Size\n";
	cin>>n;
	int *arr;
	arr = (int*)malloc(n*sizeof(int));
	for(int i=0;i<=n-1;i++){
		cout<<"Enter "<<i+1<<" Element : ";
		cin>>arr[i];
		cout<<endl;
	}
	cout<<"Array...\n";
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<endl;
	}
    // std::sort(int firstElement , int lastElement)
    // Sorts from [firstElement , lastElement)
	sort(arr , arr + n);
	cout<<"After Sorting..\n";
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<endl;
	}
	getch();
	return 0;
}