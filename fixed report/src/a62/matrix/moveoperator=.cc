#include "matrix.ih"

Matrix &Matrix::operator=(Matrix &&temp)
{
	swap(temp);
	return *this;
}
