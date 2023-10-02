#include <iostream>
#include <random>
#include <set>
using namespace std;


void ordenar(int array[], int first, int last){
    if (first<last){
    int l=first;
    int r=last;
    int pivote=array[first];
    
    while(l<r){
        while(l<r && array[l]<=pivote){
            l++;
        }
        while(array[r]>pivote){
            r--;
        }
        
        if(l<r){
            swap(array[l],array[r]);
        
        }
        
    }
    swap(array[first], array[r]);
    ordenar(array, first, r - 1);
    ordenar(array, r + 1, last);
}
}

int main() {
  int array[20];

  srand((unsigned)time(NULL));


  for (int i = 0; i < 20; i++) {

    array[i] = rand() % 20 + 1;

    for (int j = 0; j < i; j++) {
      if (array[i] == array[j]) {
        i--;
        break;
      }
    }
  }


  for (int i = 0; i < 20; i++) {
    cout << array[i] << " ";
  }

    ordenar(array, 0, 19);
    cout <<endl<< "Array ordenado: ";
    for (int i = 0; i < 20; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
  
}
