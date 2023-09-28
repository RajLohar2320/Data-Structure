#include <iostream>
using namespace std;

void sort (int*, int);
void display(int*, int);
int main()
{
	int n;
    cout << "Enter Size of Array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }
    
    cout << "Elements of Array Before sort : " << endl;
    display(arr, n);
    sort(arr, n);
    cout << endl << "Elements of Array After sort : " << endl;
    display(arr, n);
    
    return 0;
}
void display(int* temp, int size)
{
	for(int i=0; i<size; i++)
	{
		cout << temp[i] << "  ";
	}
}
void sort (int* temp, int size)
{
    int temp_var;
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(temp[j] > temp[j+1])
			{
				temp_var = temp[j];
				temp[j] = temp[j+1];
				temp[j+1] = temp_var;
			}
		}
	}
}
