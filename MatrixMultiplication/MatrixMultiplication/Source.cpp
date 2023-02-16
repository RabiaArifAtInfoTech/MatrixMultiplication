#include<iostream>
using namespace std;

void matrixMultiplication(int mat1[][3], int mat2[][3])
{
	//int result = 0;

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			int result = 0;

			for (int k = 0; k < 3; k++)
			{
				result = result + (mat1[i][k] * mat2[k][j]); 
			}
			cout << result << " ";
			//result = 0;
		}
		cout << endl;
	}
}

int main() {

	int matrix1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int matrix2[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };

	matrixMultiplication(matrix1, matrix2);

	return 0;
}