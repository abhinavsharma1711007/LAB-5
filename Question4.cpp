#include<iostream>

using namespace std;

float small( float X[], int n)
{
	float a=X[0];
	for( int i=0; i<n; i++)
	{
		if( a>X[i])
			a = X[i];
	}
	return (a);
}
float large( float X[], int n)
{
	float a=X[0];
	for( int i=0; i<n; i++)
	{
		if( a<X[i])
			a = X[i];
	}
	return (a);
}
int main()
{
	int k,l,i;
	cout << "Enter the number of elments in array 1     ";
	cin >> k;
	float x[k];
	cout << "Enter the elements	";
	for( i=0; i<k; i++)
		cin >> x[i];
	cout << "Enter the number of elments in array 2     ";
	cin >> l;
	float y[l];
        cout << "Enter the elements     ";
        for( i=0; i<l; i++)
                cin >> y[i];
	float z[l+k];
	for( i=0; i<k+l; i++)
	{	
		if(i<k)
			z[i]=x[i];
		else
			z[i]=y[i-k];
	}
	cout << "NEW ARRAY:";
	for( i=0; i<k+l; i++)
		cout << z[i] << endl;
	cout << "Smallest Number = " << small(z,k+l)<< endl;
	cout << "Largest Number = " << large(z,k+l);
	return 0;
}
