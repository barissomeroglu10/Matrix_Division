/*
In this code we will calculate division (A x C = B)

Developer: Barış Someroğlu
Date: 21.01.2024 / 3:00 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;

	cout << "Please Enter Size of Matrix: ";
	cin >> n;

	vector<vector<double>> A(n, vector<double>(n));
	vector<vector<double>> C(n, vector<double>(n));
	vector<vector<double>> B(n, vector<double>(n));

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Please Enter A[" << i << "][" << j << "]: ";
			cin >> A[i][j];

			cout << "Please Enter B[" << i << "][" << j << "]: ";
			cin >> C[i][j];
		}

		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = A[i][j] / C[i][j];
		}
	}

	cout << endl;

	cout << "Division Matrix is: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << " ";
		}

		cout << "\n";
	}

	return 0;
}