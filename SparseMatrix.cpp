#include <iostream>
using namespace std;

int main()
{
    
    // Take input for no of rows and colums for the Array to be represented as Sparse Matrix
	int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout <<"Enter number of columns: ";
    cin >> cols;

    int inputArray[rows][cols];

    cout << "Enter the elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> inputArray[i][j];
        }
    }


// Print the array which is given input 

    cout << "The array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << " " << inputArray[i][j];
        }
        cout << "\n";
    }

	// in the sparse matrix by iterating the array get the no of columns where the number of non zero elements is the total no of columns in the sparse matrix.

	int size = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (inputArray[i][j] != 0)
				size++;


	int sparseMatrix[3][size];

	// Construct a new Sparse Matrix from the input matrix
	int z = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (inputArray[i][j] != 0)
			{
				sparseMatrix[0][z] = i;
				sparseMatrix[1][z] = j;
				sparseMatrix[2][z] = inputArray[i][j];
				z++;
			} 

 cout << " The sparse Matrix for the input array is \n";
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<size; j++)
			cout <<" "<< sparseMatrix[i][j];
		cout <<"\n";
	}
	return 0;
}