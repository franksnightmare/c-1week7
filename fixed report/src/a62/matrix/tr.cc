#include "matrix.ih"

Matrix &Matrix::tr()
{
	if (d_nRows != d_nCols)
	{
		cerr << "Matrix could not be transposed: "
			<< "matrix not square ("
			<< d_nRows << "x" << d_nCols << ").\n";
		exit(1);
	}
	
	for (size_t nRow = 0; nRow != d_nRows; ++nRow)
	{
		for (size_t nCol = 0; nCol != nRow; ++nCol)
		{
			// The diagonal can be ignored.
			if (nRow == nCol)
				break;
			
			double *targetPtr = row(nRow) + nCol;
			double *mirrorPtr = row(nCol) + nRow;
			
			double h = *targetPtr;
			*targetPtr = *mirrorPtr;
			*mirrorPtr = h;
		}
	}
	
	return *this;
}
