#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;


const int TAM = 10000;
bool identicosPorDerecha(int copo1[], int copo2[], int inicio);
bool identicosPorIzquierda(int copo1[], int copo2[], int inicio);

bool sonIdenticos( int copo1[], int copo2[]);
void identificaIdenticos(int coposDeNieve[][6], int n);

int main()
{
    int n;
    cin>>n;
    int a[n][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    identificaIdenticos(a,n);
  return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool identicosPorDerecha(int copo1[], int copo2[], int inicio)
{
  int sesgo;
  int indiceCopo2;
  for(sesgo = 0; sesgo < 6; sesgo++)//6 parece número mágico
  {
    indiceCopo2 = inicio + sesgo;
    if(indiceCopo2 >= 6 )
    {
      indiceCopo2 = indiceCopo2 - 6;
    }
    if(copo1[sesgo] != copo2[indiceCopo2])
        return false;
  }
  return true;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
bool identicosPorIzquierda(int copo1[], int copo2[], int inicio)
{
  int sesgo;
  int indiceCopo2;
  for(sesgo = 0; sesgo < 6; sesgo++)
  {
    indiceCopo2 = inicio - sesgo;
    if(indiceCopo2 < 0)
    {
      indiceCopo2 = indiceCopo2 + 6;
    }
    if(copo1[sesgo] != copo2[indiceCopo2])
        return false;
  }
  return true;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool sonIdenticos( int copo1[], int copo2[])
{
  int inicio;
  for(inicio = 0; inicio < 6; inicio++)
  {
    if(identicosPorDerecha(copo1, copo2, inicio))
        return true;
    if(identicosPorIzquierda(copo1, copo2, inicio))
        return true;
  }
  return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
void identificaIdenticos(int coposDeNieve[][6], int n)
{
  int i,j;
  for(i = 0; i < n; i++)
  {
    for(j = i +1; j < n; j++)
    {
      if(sonIdenticos(coposDeNieve[i], coposDeNieve[j]))
      {
        cout << "Twin snowflakes found" << endl;
        return;
      }
    }
  }
  cout << "No two snowflakes are alike" <<endl;
}
