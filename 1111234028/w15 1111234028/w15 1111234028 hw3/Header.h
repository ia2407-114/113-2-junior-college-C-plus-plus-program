class Matrix
{
public:
	int X, Y;
	int** element;
	Matrix(int m, int n);

	double operator-(Matrix b);
};