#include<iostream>
using namespace std;
int main(){
  int baris,spasi,i,j;
  cout << "Masukkan jumlah baris : ";
  cin >> baris;
  for (i = 1; i <= baris; i++){
    for (spasi = i; spasi < baris; spasi++)
          cout << " ";
    for (j = 1; j <= i; j++)
          cout << " * ";
    cout << "\n";}
  return 0;
}