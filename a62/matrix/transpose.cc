#include "matrix.ih"

Matrix Matrix::transpose()
{
	Matrix trans(*this);
	return trans.tr();
}
