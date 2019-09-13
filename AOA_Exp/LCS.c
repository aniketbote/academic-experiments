/* Dynamic Programming implementation of LCS problem */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int x, int y)
{
    int m;
    m=(x>y)?x:y;
    return m;
}
//using namespace std;

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
void lcs( char *X, char *Y, int m, int n )
{
int L[m+1][n+1],i,j;

/* Following steps build L[m+1][n+1] in bottom up fashion. Note
	that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
for (i=0; i<=m; i++)
{
	for (j=0; j<=n; j++)
	{
	if (i == 0 || j == 0)
		L[i][j] = 0;
	else if (X[i-1] == Y[j-1])
		L[i][j] = L[i-1][j-1] + 1;
	else
		L[i][j] = max(L[i-1][j], L[i][j-1]);
	}
}
for (i=0; i<=m; i++)
{
	for (j=0; j<=n; j++)
	{
        printf("%d  ",L[i][j]);
	}
	printf("\n");
}
// Following code is used to print LCS
int index = L[m][n];
int lenght = L[m][n];

// Create a character array to store the lcs string
char lcs[index+1];
lcs[index] = '\0'; // Set the terminating character
char lcsfinal[index+1];
lcsfinal[index] = '\0'; // Set the terminating character

// Start from the right-most-bottom-most corner and
// one by one store characters in lcs[]


printf("\nSubstrings taken into consideration = ");

int z=0;
i = m, j = n;
while(L[m][n]!=1)
{
    z=z+1;
while (i > 0 && j > 0)
{
	// If current character in X[] and Y are same, then
	// current character is part of LCS
	if (X[i-1] == Y[j-1])
	{
		lcs[index-1] = X[i-1]; // Put current character in result
		i--; j--; index--;	 // reduce values of i, j and index
	}

	// If not same, then find the larger of two and
	// go in the direction of larger value
	else if (L[i-1][j] > L[i][j-1])
		i--;
	else
		j--;
}

// Print the lcs
if(z==1)
strcpy(lcsfinal,lcs);
printf("\n%s",lcs);
strcpy(lcs, "");
m=m-1;
while(L[m][n]==L[m+1][n])
{
 m=m-1;
}
index=L[m][n];
lcs[index] = '\0';
i=m;
j=n;
}
printf("\n\nlcs lenght = %d\nlcs string = %s",lenght,lcsfinal);
}


/* Driver program to test above function */
int main()
{
    char X[100],Y[100];
    printf("Enter string 1=");
    scanf("%s",&X);
    printf("Enter string 2=");
    scanf("%s",&Y);
//char X[] = "bhavesh";
//char Y[] = "havesh";
int m = strlen(X);
int n = strlen(Y);
lcs(X, Y, m, n);
return 0;
}
