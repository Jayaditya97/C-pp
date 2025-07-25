#include <iostream>
using namespace std;
void addOne(int* p){
    (*p)++;
}
int main(){
  int value = 5;
  addOne(&value);
  cout << "After function call: " << value << endl;

  return 0;
}