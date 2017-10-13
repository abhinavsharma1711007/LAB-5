#include<iostream>

using namespace std;

int small( int X[], int n)
{
	int a=X[0];
	for( int i=0; i<n; i++)
	{
		if( a>X[i])
			a = X[i];
	}
	return (a);
}
int large( int X[], int n)
{
        int a=X[0];
        for( int i=0; i<n; i++)
        {
                if( a<X[i])
                        a = X[i];
        }
        return (a);
}
float mean( int X[], int n)
{
        float a = 0;
        for( int i=0; i<n; i++)
		a = a + X[i];
        return (a/n);
}
float median( int X[], int n)
{
	int a;
	float b;
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
	if(n%2!=0)
		b = X[(n+1)/2 - 1];
	else
		b = (X[(n/2)-1]+X[n/2])/2.0;
	return (b);
}
void repetation( int X[], int n)
{
	int a,b=1;
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
	for( int k=0; k<n; k++)
	{	
		b = 1;
		if(X[k]!=X[k+1])
		{	
			for(int l=k; l>=0; l--)
			{
				if(X[k]==X[l-1])
					b++;
			}
			cout << X[k] << " occurs " << b << " times" << endl;
		}
	}
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
	cout << "Smallest number = " << small(x,y) << endl;
	cout << "Largest number = " << large(x,y) << endl;
	cout << "Mean  = " << mean(x,y) << endl;
	cout << "Median= " << median(x,y) << endl;
	repetation(x,y);
	return 0;
}
