#include<iostream>
using namespace std;
//YDZ给sort函数添加注释
void sort(int arr[],int size)
{
    int temp = 0;
    bool flag - false;
    for(int i = 0; i < size-1; i++)
    {
        for(int j =0; j < size-i-1; j++ )
        {
			    // YDZ修改从大到小排序
                if(arr[j] < arr[j+1])
                {
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
			flag = true;
                }
        }
	if(!flag)
		break;
    }
}

int main()
{
	// 小张添加的注释
	int arr[] = {56,12,63,5,89,12,54,123};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,size);
	return 0;
}
