#include "matrix.ih"

Matrix Matrix::identity(size_t dim)
{
	Matrix identity(dim, dim);
	
	for (size_t index = 0; index != dim; ++index)
		*(identity.row(index) + index) = 1;
	
	return identity;
}
