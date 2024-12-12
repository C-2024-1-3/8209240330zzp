#include<iostream>
using namespace std;
void merge(const int arr1[], int n, const int arr2[], int m)
{
    int i, j = 0;
    while (i< n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
	
}
int main()
{
    int  n = 0;
    int m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[1000] = { 0 };
    //ÊäÈë
    cin >> n >> m;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
	merge(arr1,n,arr2,m);
	return 0;
}