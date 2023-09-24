#include<iostream>
using namespace std ;
int search(int *, int, int);
int main()
{
    int n, value;
    cout << "Enter Size of Array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }
    cout << "Enter Value to find : " << endl;
    cin >> value;
    int ind = search(arr, n, value);
    if(ind == -1)
        cout << "Not Found !!" << endl;
    else 
        cout << "Found at " << ind << " position" << endl;

}
int search(int *a_ptr, int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(*(a_ptr+i) == key)
            return i+1;
    }
    return -1;
}