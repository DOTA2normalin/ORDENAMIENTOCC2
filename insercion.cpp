#include<iostream>
using namespace std;
void crear(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"digite un numero: ";
		cin>>A[i];
	}
}

void ordenar(int A[],int n)
{
	int temp,j;
	for (int i=1; i<n; i++)
	{
    		temp = A[i];
        	j = i - 1;
		while ( (A[j] > temp) && (j >= 0) ){
    			A[j+1] = A[j];
    			j--;
    		}
    		A[j+1]= temp;
    		}
}
void mostrar(int A[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"tamaño de arreglo? ";cin>>n;
	int A[n];
	crear(A,n);
	ordenar(A,n);
	mostrar(A,n);
	return 0;
}
