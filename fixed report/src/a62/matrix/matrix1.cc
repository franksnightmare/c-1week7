#include "matrix.ih"

Matrix::Matrix(size_t nRows, size_t nCols)
:
	d_nRows(nRows),
	d_nCols(nCols),
	d_data(new double[nRows * nCols])
{
	for (size_t index = 0; index != nRows * nCols; ++index)
	{
		d_data[index] = 0;
	}
}
