#include<iostream>

using namespace std;

void kcompare( float X[], int n, int k)
{
	float a;
	for( int i=0; i<n-1; i++)
	{
		for( int j=i+1; j<n ; j++)
		{
			if(X[i]>X[j])
			{	
				a = X[i];
				X[i] = X[j];
				X[j] = a;
			}
		}
	}
	cout << "kth Smallest Number = " << X[k-1] << endl;
	cout << "kth Largest Number = " << X[n-k ];
}
int main()
{
	int n,k;
	cout << "Enter the number of elements:	";
	cin >> n;
	float x[n];
	cout << "Enter elements	:";
	for(int i=0; i<n; i++)
		cin >> x[i];
	cout << "Enter the position'k'	:";
	cin >> k;
	kcompare(x,n,k);
	return 0;
}
