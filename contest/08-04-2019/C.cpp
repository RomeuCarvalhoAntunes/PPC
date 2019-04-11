#include <bits/stdc++.h>

using namespace std;



int main(){

  int size;
  cin >> size;
  int aux;
  int array[size];
  int j=1;

  if(size%2 != 0){
    std::cout << -1 << '\n';
  } else {

    for(int i=0; i<size; i++){
      array[i] = j;
      j++;
    }


    for(int i=0; i<size; i+=2){
      aux = array[i];
      array[i]= array[i+1];
      array[i+1]=aux;
    }



    for(int i=0; i<size; i++){
      std::cout << array[i] << " ";
    }

  }




  return 0;
}
