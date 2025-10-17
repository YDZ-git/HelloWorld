#include<iostream>
using namespace std;

void sort(int arr[],int i,int j)
{
	int val = arr[i];
	int l = i;
	int r = j;
	while(l < r)
	{
		while(l<r&&arr[r]>=val)
		{
			r--;
		}
		if(l < r)
		{
			arr[l++] = arr[r];
		}
		while(l < r && arr[l]<=val)
		{
			l++;
		}
		if(l<r)
		{
			arr[r--] = arr[l];
		}
	}
	sort[l] = val;
	sort(arr,i,l-1);
	sort(arr,l+1,j);
}


//YDZ给sort函数添加注释
void sort(int arr[],int size)
{
    sort(arr,0,size);
}

int main()
{
	// 小张添加的注释
	int arr[] = {56,12,63,5,89,12,54,123};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,size);
	return 0;
}
