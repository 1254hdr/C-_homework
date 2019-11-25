#include "num.h"
#include <iostream>

using namespace std;

bool CNum::print_student_id(const char* id, const int len)
{
	if (!*id)
	{
		cout << "Failed to get your student number" << endl;
		return false;
	}

	const auto number_index = new int[len];

	for (auto i = 0; i < len; i++)
	{
		number_index[i] = *(id + i) - '0';
		cout << "--------";
	}

	cout << endl;

	for (auto i = 0; i < 11; i++)
	{
		for (auto j = 0; j < len; j++)
		{
			for (auto k = 0; k < 7; k++)
			{
				if ((num_[number_index[j]][i] >> (6 - k)) % 2)
					cout << "*";
				else
					cout << " ";
			}
			cout << '\t';
		}
		cout << endl;
	}

	delete[] number_index;

	return true;
}

void CNum::init_num()
{
	//0
	num_[0][0] = 30;
	num_[0][1] = 33;
	num_[0][2] = 33;
	num_[0][3] = 33;
	num_[0][4] = 33;
	num_[0][5] = 0;
	num_[0][6] = 33;
	num_[0][7] = 33;
	num_[0][8] = 33;
	num_[0][9] = 33;
	num_[0][10] = 30;
	//1
	num_[1][0] = 1;
	num_[1][1] = 1;
	num_[1][2] = 1;
	num_[1][3] = 1;
	num_[1][4] = 1;
	num_[1][5] = 0;
	num_[1][6] = 1;
	num_[1][7] = 1;
	num_[1][8] = 1;
	num_[1][9] = 1;
	num_[1][10] = 1;
	//2
	num_[2][0] = 30;
	num_[2][1] = 1;
	num_[2][2] = 1;
	num_[2][3] = 1;
	num_[2][4] = 1;
	num_[2][5] = 30;
	num_[2][6] = 32;
	num_[2][7] = 32;
	num_[2][8] = 32;
	num_[2][9] = 32;
	num_[2][10] = 30;
	//3
	num_[3][0] = 30;
	num_[3][1] = 1;
	num_[3][2] = 1;
	num_[3][3] = 1;
	num_[3][4] = 1;
	num_[3][5] = 30;
	num_[3][6] = 1;
	num_[3][7] = 1;
	num_[3][8] = 1;
	num_[3][9] = 1;
	num_[3][10] = 30;
	//4
	num_[4][0] = 33;
	num_[4][1] = 33;
	num_[4][2] = 33;
	num_[4][3] = 33;
	num_[4][4] = 33;
	num_[4][5] = 30;
	num_[4][6] = 1;
	num_[4][7] = 1;
	num_[4][8] = 1;
	num_[4][9] = 1;
	num_[4][10] = 1;
	//5
	num_[5][0] = 30;
	num_[5][1] = 32;
	num_[5][2] = 32;
	num_[5][3] = 32;
	num_[5][4] = 32;
	num_[5][5] = 30;
	num_[5][6] = 1;
	num_[5][7] = 1;
	num_[5][8] = 1;
	num_[5][9] = 1;
	num_[5][10] = 30;
	//6
	num_[6][0] = 30;
	num_[6][1] = 32;
	num_[6][2] = 32;
	num_[6][3] = 32;
	num_[6][4] = 32;
	num_[6][5] = 30;
	num_[6][6] = 33;
	num_[6][7] = 33;
	num_[6][8] = 33;
	num_[6][9] = 33;
	num_[6][10] = 30;
	//7
	num_[7][0] = 30;
	num_[7][1] = 1;
	num_[7][2] = 1;
	num_[7][3] = 1;
	num_[7][4] = 1;
	num_[7][5] = 0;
	num_[7][6] = 1;
	num_[7][7] = 1;
	num_[7][8] = 1;
	num_[7][9] = 1;
	num_[7][10] = 1;
	//8
	num_[8][0] = 30;
	num_[8][1] = 33;
	num_[8][2] = 33;
	num_[8][3] = 33;
	num_[8][4] = 33;
	num_[8][5] = 30;
	num_[8][6] = 33;
	num_[8][7] = 33;
	num_[8][8] = 33;
	num_[8][9] = 33;
	num_[8][10] = 30;
	//9
	num_[9][0] = 30;
	num_[9][1] = 33;
	num_[9][2] = 33;
	num_[9][3] = 33;
	num_[9][4] = 33;
	num_[9][5] = 30;
	num_[9][6] = 1;
	num_[9][7] = 1;
	num_[9][8] = 1;
	num_[9][9] = 1;
	num_[9][10] = 30;
}
