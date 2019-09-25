
#include "pch.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#pragma warning(disable:4996)
using namespace std;

int sudu[11][11][11];
int N;

//九宫格 
void ninesudu(int i, int j)
{
	int m, n;
	if (i <= 3)
	{
		if (j <= 3)
		{
			for (m = 1; m < 4; m++)
				for (n = 1; n < 4; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 1; m < 4; m++)
				for (n = 4; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 9)
		{
			for (m = 1; m < 4; m++)
				for (n = 7; n < 10; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
	else if (i <= 6)
	{
		if (j <= 3)
		{
			for (m = 4; m < 7; m++)
				for (n = 1; n < 4; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 4; m < 7; m++)
				for (n = 4; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 9)
		{
			for (m = 4; m < 7; m++)
				for (n = 7; n < 10; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
	else if (i <= 9)
	{
		if (j <= 3)
		{
			for (m = 7; m < 10; m++)
				for (n = 1; n < 4; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 7; m < 10; m++)
				for (n = 4; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 9)
		{
			for (m = 7; m < 10; m++)
				for (n = 7; n < 10; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
}


//八宫格 
void eightsudu(int i, int j)
{
	int m, n;
	if (i <= 4)
	{
		if (j <= 2)
		{
			for (m = 1; m < 5; m++)
				for (n = 1; n < 3; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 4)
		{
			for (m = 1; m < 5; m++)
				for (n = 3; n < 5; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 1; m < 5; m++)
				for (n = 5; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 8)
		{
			for (m = 1; m < 5; m++)
				for (n = 7; n < 9; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
	else if (i <= 8)
	{
		if (j <= 2)
		{
			for (m = 5; m < 9; m++)
				for (n = 1; n < 3; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 4)
		{
			for (m = 5; m < 9; m++)
				for (n = 3; n < 5; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 5; m < 9; m++)
				for (n = 5; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 8)
		{
			for (m = 5; m < 9; m++)
				for (n = 7; n < 9; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
}

//六宫格 
void sixsudu(int i, int j)
{
	int m, n;
	if (i <= 2)
	{
		if (j <= 3)
		{
			for (m = 1; m < 3; m++)
				for (n = 1; n < 4; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 1; m < 3; m++)
				for (n = 4; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
	else if (i <= 4)
	{
		if (j <= 3)
		{
			for (m = 3; m < 5; m++)
				for (n = 1; n < 4; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 3; m < 5; m++)
				for (n = 4; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
	else if (i <= 6)
	{
		if (j <= 3)
		{
			for (m = 5; m < 7; m++)
				for (n = 1; n < 4; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 6)
		{
			for (m = 5; m < 7; m++)
				for (n = 4; n < 7; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
}

//四宫格 
void foursudu(int i, int j)
{
	int m, n;
	if (i <= 2)
	{
		if (j <= 2)
		{
			for (m = 1; m < 3; m++)
				for (n = 1; n < 3; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 4)
		{
			for (m = 1; m < 3; m++)
				for (n = 3; n < 5; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
	else if (i <= 4)
	{
		if (j <= 2)
		{
			for (m = 3; m < 5; m++)
				for (n = 1; n < 3; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
		else if (j <= 4)
		{
			for (m = 3; m < 5; m++)
				for (n = 3; n < 5; n++)
				{
					if (sudu[m][n][0] != 0)
						sudu[i][j][sudu[m][n][0]] = 0;
				}
		}
	}
}


void inti()
{
	int i, j, k;
	int cnt = 0;
	for (i = 1; i < N; i++)
		for (j = 1; j < N; j++)
		{
			if (sudu[i][j][0] == 0)
			{
				for (k = 1; k < N; k++)
				{
					if (sudu[i][k][0] != 0)
						sudu[i][j][sudu[i][k][0]] = 0;
				}
				for (k = 1; k < N; k++)
				{
					if (sudu[k][j][0] != 0)
						sudu[i][j][sudu[k][j][0]] = 0;
				}
				if (N == 5 || N == 7 || N == 9 || N == 10)
				{
					if (N == 10)
						ninesudu(i, j);
					if (N == 9)
						eightsudu(i, j);
					if (N == 7)
						sixsudu(i, j);
					if (N == 5)
						foursudu(i, j);
				}
				for (k = 1; k < N; k++)
				{
					if (sudu[i][j][k] != 0)
						cnt++;
				}
				if (cnt == 1)
				{
					for (k = 1; k < 10; k++)
					{
						if (sudu[i][j][k] != 0)
						{
							sudu[i][j][0] = k;
							break;
						}
					}
				}
			}
			cnt = 0;
		}
}



void fillnumber(int number, int i, int j) {
	for (int k = 1; k < N; k++) {
		sudu[i][k][number]++;
		sudu[k][j][number]++;
	}
	/*for (int n = 0; n < 3; n++) {
		for (int m = 0; m < 3; m++) {
			sudu[i / 3 * 3 + n][j / 3 * 3 + m][number]++;
		}
	}*/
}
void  resetnumber(int number, int i, int j) {
	for (int k = 1; k < N; k++) {
		sudu[i][k][number]--;
		sudu[k][j][number]--;
	}
	/*for (int n = 0; n < 3; n++) {
		for (int m = 0; m < 3; m++) {
			sudu[i / 3 * 3 + n][j / 3 * 3 + m][number]--;
		}
	}*/
}
void solve(int id)
{
	if (id == 0)
		return;
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < N; j++)
		{
			if (sudu[i][j][0] == 0)
			{
				for (int number = 1; number < 10; number++)
				{
					if (sudu[i][j][number] == 0)
					{
						fillnumber(number, i, j);
						sudu[i][j][0] = number;
						solve(id - 1);
						sudu[i][j][0] = 0;
						resetnumber(number, i, j);
					}
				}
				return;
			}
		}
	}
}




int main(int argc, char *argv[])
{
	int i, n, j, k;
	int id = 0;
	ifstream ifp;
	ofstream ofp;
	N = atoi(argv[2]);
	N = N + 1;
	n = atoi(argv[4]);
	ifp.open(argv[6]);
	if (!ifp.is_open())//判断文件是否成功打开
		cout << "File open failed" << endl;
	ofp.open(argv[8]);
	if (!ofp.is_open())
		cout << "File open failed" << endl;
	int count = 0;
	while (n--)
	{
		for (i = 1; i < N; i++)
			for (j = 1; j < N; j++)
				//cin >> sudu[i][j][0];
				ifp >> sudu[i][j][0];

		for (i = 1; i < N; i++)
			for (j = 1; j < N; j++)
				for (k = 1; k < 10; k++)
					sudu[i][j][k] = 1;
		inti();
		//cout << endl;
		ofp << endl;
		int q = 5;
		while (q--)
		{
			for (i = 1; i < N; i++)
			{
				for (j = 1; j < N; j++)
					if (sudu[i][j][0] == 0)
						inti();
			}
			for (i = 1; i < N; i++)
				for (j = 1; j < N; j++)
					if (sudu[i][j][0] == 0)
						count++;
			if (count == 0)
				break;
			count = 0;
		}

		for (i = 1; i < N; i++)
			for (j = 1; j < N; j++)
			{
				if (sudu[i][j][0] == 0)
					id++;
			}
		if(id!=0)
			solve(id);
		for (i = 1; i < N; i++)
		{
			for (j = 1; j < N; j++)
			{
				//cout << sudu[i][j][0] << ' ';
				ofp << sudu[i][j][0] << ' ';
			}
			//cout << endl;
			ofp << endl;
		}
	}
	return 0;
}