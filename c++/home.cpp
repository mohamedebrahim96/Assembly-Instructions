// i/o example

#include <iostream>
using namespace std;

int main ()
{
  float *x;
  int counter;
  cout <<"how many student"<<endl;
  //cin >> counter;
  cout << "X:" << x << endl;
  cin >> counter;
  x = new float[counter];


  cout << "counter:" << counter << endl;
    for(int i=0;i<counter;i++){
        cin >> x[i];
    }


    float sum;
    for(int i=0;i<counter;i++){
        cout << "X array pointer:" << x+i << endl;
        sum += *(x+i);
    }
    cout << "Sum is:" << sum << endl;
    cout << "Avareage is:" << (sum/counter) << endl;


    return 0;
}