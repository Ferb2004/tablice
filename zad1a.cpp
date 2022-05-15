 #include <iostream>
using namespace std; 

void czytaj(int T[], int n)
{
  for (int i=0; i<n; i++)
    cin>>T[i];
}

void wypisz (int T[], int n)
{
  for (int i=0; i<n; i++)
    cout<<endl<<T[i]<<";";
}


int main()
{
  int n;
  cout<<"Podaj ilosc liczb: ";
  cin>>n;
  int T[n];
  czytaj (T,n);
  wypisz (T,n);
}