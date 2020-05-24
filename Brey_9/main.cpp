#include <iostream>
#include <iomanip>

using namespace std;

#define N 10
#define M 10

bool is_symmetrical(int* matr, int n, int m)
{
	if (n != m) return false;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j) continue;
			if (matr[i * N + j] != matr[j * N + i])
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

	cout << "��������� ������� ���� ������� ������� ������ ���-112\n";
	cout << "��������� ��� ������ � ��������\n";

	int n, m;
	int matr[N][M];

	cout << "������� ���������� �����: ";
	cin >> n;
	cout << "������� ���������� ��������: ";
	cin >> m;

	if (n > 10 || m > 10)
	{
		cout << "�������� ������ ������ ����������� (10)\n";
		return 0;
	}

	if (n < 0 || m < 0)
	{
		cout << "�������� ������ �� ����� ���� �������������\n";
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

	cout << "�� ����� �������\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(3) << matr[i][j] << " ";
		}
		cout << "\n";
	}

	bool is_sym = is_symmetrical(&matr[0][0], n, m);

	cout << "��� ������� ";

	if (!is_sym)
	{
		cout << "�� ";
	}
	cout << "����������� ������������ ������� ���;\n";
	system("pause");

	return 0;
}
