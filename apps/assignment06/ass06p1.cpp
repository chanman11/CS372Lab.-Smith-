​//Code help from: https://www.chegg.com/homework-help/questions-and-answers/1-40-points-s-interesting-algorithm-int-equal-int-n-ado-int-j-k-1-q86120519
#include<bits/stdc++.h>
using namespace std;
 int anyEqual (int n, A[][])
 {
	int i,j,k,m;
	for (i = 0; i<=n, i++)
	{
		for (j=0; j<= n, j++)
		{
			for (k=0; k<= n; k++)
			{
				for (m=0;m<=n;m++)
				{
					if (A[i][j]==A[k][m] && !(i== kk && j==n)
					{
						return 1;
					}
				}
			}
		}
	}
return 0;
}

​int main()
{
	int n;
	cout<<"enter size of matrix"<<endl;
    cin>>n;
    int A[n][n];
	cout<<"Enter the matrix element one by one"<<end;
    for (int i =0; i<n, i++)
	{    
        for (intj=0; j< n, j++)
		{
            cin>>A[i][j];
        }
    }
   if(anyEqual(n,A))
	   cout<<"Matrix has any two element is same"<<endl;
   else
      cout<<"No 2 element is same in this matrix"<<endl;
}