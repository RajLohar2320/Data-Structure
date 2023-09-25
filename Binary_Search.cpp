#include<iostream>
using namespace std ;
void sort(int *, int);
int search(int *, int, int);
int main()
{
    int n, value;
    cout << "Enter Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array : ";
    for(int i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }
    cout << "Enter Value to find : ";
    cin >> value;
    sort(arr, n);
    cout << endl<< "Elements of Array : " << endl;
    for(int i=0; i<n; i++)
    {
        cout << *(arr+i) << "  ";
    }
    int ind = search(arr, n, value);
    if(ind == -1)
        cout << endl << "Not Found !!" << endl;
    else 
        cout << endl << "Found at " << ind << " position" << endl;

}

void sort(int *a, int size)
{
    int i, j, temp;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return ;
}
int search(int *a_ptr, int size, int key)
{
	
	int low, mid, high;
	low = 0;
	high = size-1;
	
    while(low<high)
    {
    	mid = (low + high)/2;
        if(key == *(a_ptr+mid))
            return mid+1;
        else if(key < *(a_ptr+mid))
        	high = mid-1;
        else 
        	low = mid+1;
    }
    return -1;
}
