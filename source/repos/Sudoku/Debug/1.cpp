

//#include "pch.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#pragma warning(disable:4996)
using namespace std;

int sudu[11][11][11];
int N;

//¾Å¹¬¸ñ 
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


//°Ë¹¬¸ñ 
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

//Áù¹¬¸ñ 
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

//ËÄ¹¬¸ñ 
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
int main(int argc, char *argv[])
{
	int i, n, j, k;
	FILE* fp1;
	FILE* fp2;
	N = atoi(argv[2]);
	N = N + 1;
	n = atoi(argv[4]);
	char* InputName = argv[6];
	char* OutputName = argv[8];
	fp1 = fopen(InputName, "r");
	if (fp1 == NULL) //
		return -1;
	fp2 = fopen(OutputName, "w");
	if (fp2 == NULL) //
		return -1;
	fclose(fp2);
	int count = 0;
	while (n--)
	{
		for (i = 1; i < N; i++)
			for (j = 1; j < N; j++)
				//cin >> sudu[i][j][0];
				fscanf(fp1, "%d", &sudu[i][j][0]);

		for (i = 1; i < N; i++)
			for (j = 1; j < N; j++)
				for (k = 1; k < 10; k++)
					sudu[i][j][k] = 1;
		inti();
		cout << endl;
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
		{
			for (j = 1; j < N; j++)
			{
				cout << sudu[i][j][0] << ' ';
				fprintf(fp2, "%d", sudu[i][j][0]);
				fprintf(fp2, " ");
			}
			cout << endl;
			fprintf(fp2, "\n");
		}
		fclose(fp2);
	}
	fclose(fp1);
}
