#include <iostream>

int main() {
  
using namespace std;

//neracel n bn tiv     stexcel n chapani dinamik zangvac bnakan tveric ev sortavorel u artacel


int n;
cin >> n;
int* arr = new int[n];
for(int i = 0; i < n; i++) {
  cin >> arr[i];
}

for(int i = 0; i < n; i++) {
  for(int j = 0 ; j < n ; j++) {
    if(arr[i] < arr[j]) {
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
}

for(int i = 0; i < n; i++) {
  cout << arr[i] << "\t";
  
}
delete[] arr;







return 0;
}