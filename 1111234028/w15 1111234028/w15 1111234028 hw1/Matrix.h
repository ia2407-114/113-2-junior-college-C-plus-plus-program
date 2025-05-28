class Matrix
{
public:
	int row, column;
	int** element;

	Matrix(int m, int n);

	// 定義矩陣的「++」(遞增)後置運算子的多載
	Matrix operator--(int)
	{
		Matrix temp(row, column); // 備分後置++運算子執行前的物件內容 
		for (int i = 0; i < row; i++)
			for (int j = 0; j < column; j++)
			{
				temp.element[i][j] = this->element[i][j];
				this->element[i][j] = this->element[i][j] - 1;
			}
		return temp; // 回傳後置++運算子執行前的物件內容
	}
};
