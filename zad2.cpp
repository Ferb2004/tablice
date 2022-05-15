
#include <iostream>
#include <iomanip>
using namespace std;

void czytaj(int T[][5], int n, int m)
{
  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      T[i][j]=i+j;
}

void wypisz (int T[][5], int n, int m)
{
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<m; j++)
    cout<<setw(4) <<T[i][j]<<";";
    cout<<endl;
    
  }
}

int main()
{
  int n=4, m=5;
  int T[4][5];
  czytaj(T, n, m);
  wypisz (T, n, m);
}