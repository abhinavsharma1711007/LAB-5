#include<iostream>

using namespace std;

int sum( int X[], int n)
{
	int a=0, b=0;
	for( a=0; a<n ; a++)
		b = b + X[a];
	return (b);
}
int main()
{
	int y;
	cout << "Enter the Numbers of Elements:  ";
	cin >> y;
	int x[y];
	cout << "Enter the Elements:  ";
	for( int i=0; i<y; i++)
		cin >> x[i];
	cout << "Sum = " << sum(x,y);
	return 0;
}
