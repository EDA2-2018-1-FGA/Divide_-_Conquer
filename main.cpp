#include <bits/stdc++.h>

using namespace std;

int main(){

  int lenght;

  cin >> lenght;

  cout << "? ";
  for(int i = 0; i < lenght; i++){
    cout << "0";
  }
  cout << endl;

  int numbers_1;
  cin >> numbers_1;

  int start = 1, end = lenght;

  while(end - start >= 2){

    int middle = (start + end) / 2;

    cout << "? ";
    for(int i = 1; i <= lenght; i++){
      if(i >= start && i <= middle){
        cout << "1";
      } else {
        cout << "0";
      }
    }
    cout << endl;
    int aux;

    cin >> aux;

    if(abs(numbers_1 - aux) == middle - start + 1){
      start = middle;
    } else {
      end = middle;
    }
  }

  int aux1;
  cout << "? ";
  for(int i = 1; i <= lenght; i++){
    if(i == start){
      cout << "1";
    } else {
      cout << "0";
    }
  }
  cout << endl;

  cin >> aux1;


  int aux2;
  cout << "? ";
  for(int i = 1; i <= lenght; i++){
    if(i == end){
      cout << "1";
    } else {
      cout << "0";
    }
  }
  cout << endl;

  cin >> aux2;

  if(aux1 < aux2){
    cout << "! " << end << " " << start << endl;
  } else {
    cout << "! " << start << " " << end << endl;
  }
  return 0;
}
