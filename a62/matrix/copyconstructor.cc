#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
:
	d_nRows(other.d_nRows),
	d_nCols(other.d_nCols),
	d_data(new double[other.d_nRows * other.d_nCols])
{
	size_t size = other.d_nRows * other.d_nCols;
	for (size_t index = 0; index != size; ++index)
		d_data[index] = other.d_data[index];
}
