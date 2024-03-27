#include <iostream>

 using namespace std;

 // int a[]; unknow array;
 int b[5] ={1,3,5};
 //int c[3] = {33,4,46,6,4};
 int d[]= {2,35,6,5,4};
  void print( int arr[], int s) {

  for (int i =0; i< s; i++) {cout << arr[i]<<" "<<endl;
  }}
  int main(){
  //int e[];
  int f[6]={1,3,5};
  //int g[2]={2,2,4,5};
  int h[]={2,4,5,4};

    int sB =sizeof(b)/sizeof(b[0]);
    int sD =sizeof(d)/sizeof(d[0]);
    int sF =sizeof(f)/sizeof(f[0]);
    int sH =sizeof(h)/sizeof(h[0]);

    print(b,sB);
    print(d,sD);
    print(f,sF);
    print(h,sH);

    return 0;
    }
