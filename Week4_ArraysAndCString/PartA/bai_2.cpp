#include<iostream>
using namespace std;

void print(char c[]) {

    for (int i = 0; c[i] != '\0'; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    cout << c << endl;}
    int main()
{
 char a1[5]= "abcd";
 char a2[]="ajcbcbs";

 print(a1);
 print (a2);

 return 0;
}
