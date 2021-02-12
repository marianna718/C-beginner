#include <iostream>

int main() {
  
using namespace std;

//nermucel n heto n hatanoc zangvac voric krknumnery jnjum e 

int n;
cin >> n;
int* arr =new int[n];
for(int i = 0; i < n; i++) {
  for(int j = i; j < n; j++) {
    if((arr[i] == arr[j]) && (arr[j] != 0) && (i != j)) {
      arr[j] = 0;
    }
  }
}

for(int i = 0; i < n; i++){
  if(arr[i] != 0){
    cout << arr[i] << "\t";
  }
  delete[] arr;
}










return 0;
}