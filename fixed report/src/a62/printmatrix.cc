#include "main.ih"

using namespace std;

void printMatrix(Matrix matrix)
{
for (size_t nRow = 0; nRow != matrix.nRows(); ++nRow)
	{
		for (size_t nCol = 0; nCol != matrix.nCols(); ++nCol)
		{
			cout << *(matrix.row(nRow) + nCol) << " ";
		}
		cout << '\n';
	}
	cout << '\n';
}
