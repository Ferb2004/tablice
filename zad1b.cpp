#include <iostream>
using namespace std;

void wypisz(int T[], int n)
{
  for (int i=0; i<n; i++) 
  cout<<T[i]<<"; ";
}

int main()
{
  int a=5;
  int T[a]={1,2,3,4,5};
  wypisz (T, a);
}