#include "matrix.ih"

double *Matrix::row(size_t index)
{
	return d_data + index * d_nCols;
}
