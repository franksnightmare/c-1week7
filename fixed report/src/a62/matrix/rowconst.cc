#include "matrix.ih"

double const *Matrix::row(size_t index) const
{
	return d_data + index * d_nCols;
}
