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
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(temp[i]>temp[j])
			{
				int temp_var = temp[i];
				temp[i] = temp[j];
				temp[j] = temp_var;
			}
		}
	}
}
