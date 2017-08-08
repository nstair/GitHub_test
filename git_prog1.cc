#include <fstream>
#include <iostream>

using namespace std;

int main(){
  cout << "hello there world\n" << endl;

  std::vector<int> v(10);

  v[0] = 1

  for(int i=0; i < 9; i++){
    v[i+1] = 2*v[i]
    cout << "V[i] = " << v[i] << endl;
  }

  return 0;
}
