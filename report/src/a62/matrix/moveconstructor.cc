#include "matrix.ih"

Matrix::Matrix(Matrix &&temp)
:
	d_nRows(temp.d_nRows),
	d_nCols(temp.d_nCols),
	d_data(temp.d_data)
{
	temp.d_nRows = 0;
	temp.d_nCols = 0;
	temp.d_data = 0;
}
