class Matrix
{
public:
	int row, column;
	int** element;

	Matrix(int m, int n);

	// �w�q�x�}���u++�v(���W)��m�B��l���h��
	Matrix operator--(int)
	{
		Matrix temp(row, column); // �Ƥ���m++�B��l����e�����󤺮e 
		for (int i = 0; i < row; i++)
			for (int j = 0; j < column; j++)
			{
				temp.element[i][j] = this->element[i][j];
				this->element[i][j] = this->element[i][j] - 1;
			}
		return temp; // �^�ǫ�m++�B��l����e�����󤺮e
	}
};
