#include<stdio.h>
int Findmini(int m, int n, int mat[4][4], int i, int j, int &tag, int tmp) {
	if ((i == m - 1 && j == n - 1) && (tag == m + n - 2)) {
		tmp = tmp + mat[i][j];
		printf("%d ", tmp);
		return 0;
	}
	else if ((i==m-1)&&(j<n-1))
	{
		tmp = tmp + mat[i][j];
		++tag;
		Findmini(m, n, mat, i, j + 1, tag, tmp);
		--tag;
		return 0;
	}
	else if ((i<m-1)&&(j==n-1))
	{
		tmp = tmp + mat[i][j];
		++tag;
		Findmini(m, n, mat, i + 1, j, tag, tmp);
		--tag;
		return 0;
	}
	else {
		tmp = tmp + mat[i][j];
		++tag;
		Findmini(m, n, mat, i + 1, j, tag, tmp);
		Findmini(m, n, mat, i, j + 1, tag, tmp);
		--tag;
	}
}
int main(int argc, char* argv[]) {
	int m = 4, n = 4, tag = 0, tmp = 0;
	int mat[4][4] = { {1,2,3,4}, {4,8,3,2}, {6,1,4,5}, {7,3,7,8} };
	printf("目标矩阵:\n");
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j) {
			printf("%d ", mat[i][j]);
			if (j==n-1)
			{
				printf("\n");
			}
		}
	}
	printf("矩阵遍历路径和:");
	 Findmini(m, n,mat, 0, 0, tag, tmp);
	return 0;
}