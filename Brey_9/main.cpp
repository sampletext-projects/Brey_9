#include <iostream>
#include <iomanip>

using namespace std;

bool is_symmetrical(int* matr, int n, int m)
{
	if (n != m) return false;

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < m / 2; j++)
		{
			if (matr[i * m + j] != matr[j * m + i])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Брей Валерия студент группы УМЛ-112\n";
	cout << "Программа для работы с матрицей\n";

	int n, m;
	int matr[10][10];

	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;

	if (n > 10 || m > 10)
	{
		cout << "Введённый размер больше допустимого (10)\n";
		return 0;
	}
	if (n < 0 || m < 0)
	{
		cout << "Введённый размер не может быть отрицательным\n";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "Matr[" << i << "][" << j << "] = ";
			cin >> matr[i][j];
		}
	}

	cout << "Вы ввели матрицу\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(3) << matr[i][j] << " ";
		}
		cout << "\n";
	}

	bool is_sym = is_symmetrical(&matr[0][0], n, m);

	cout << "Эта матрица ";

	if (!is_sym)
	{
		cout << "не ";
	}
	cout << "симметрична относительно главной оси;\n";
	system("pause");

	return 0;
}
