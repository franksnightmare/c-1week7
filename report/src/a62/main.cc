#include "main.h"

int main(int argc, char **argv)
{
	Matrix matrix1(4, 7);
	Matrix matrix2 = Matrix::identity(5);
	Matrix matrix3({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
	Matrix matrix4(matrix3.transpose());
	
	// Causes an error, column too big/small.
	//Matrix matrix5({{1, 2, 3}, {4, 5, 6}, {7, 8}});
	
	// Causes an error, matrix not square.
	//Matrix matrix6(matrix1.transpose();
	
	printMatrix(matrix1);
	printMatrix(matrix2);
	printMatrix(matrix3);
	printMatrix(matrix4);
}
