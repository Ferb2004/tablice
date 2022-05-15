#include<iostream>
using namespace std;

void najm()
{
    int min, tab[]={2, 3, 6, 7, 8, 7, 4, 3, 1, 7}; 

    min = tab[0]; 

    for(int i=1;i<10;i++) 
        if(min>tab[i])
            min = tab[i];

    cout<<"Najmniejszą wczytaną liczbą jest "<<min<<endl;

    return 0;
}

int main()
{
  najm();
}