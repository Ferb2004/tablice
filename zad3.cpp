#include <iostream>
using namespace std;

void czytaj(double T[], int n)
{
  for(int i=0;i<n;i++)
    cin>>T[i];
}

void wypisz (double T[], int n)
{
  for (int i=0; i<n; i++)
  cout<<T[i]<<";";
}

double suma(double T[], int n)
{
  int s=0;
  for(int i=0;i<n;i++)
  s=s+T[i];
  return s;
}

int main()
{
  int n;
  cout<<"podaj ilosc: "<<endl;
  cin>>n;
  double T[n];
  czytaj(T,n);
  wypisz(T,n);
  cout<<endl<<"suma: "<<suma(T,n)<<endl;

}