//find wheather a alphabet is a vowel oe consonant
#include <iostream>
using namespace std;
int main() {
  char c;
  cout<<"Enter an alphabet: ";
  cin>>c;
     switch (c)
     {
       case 'a':
        cout<<"It is a vowel"<<endl;
        break;
       case 'e':
        cout<<"It is a vowel"<<endl;
        break;
       case 'i':
        cout<<"It is a vowel"<<endl;
        break;
       case 'o':
        cout<<"It is a vowel"<<endl;
        break;
       case 'u':
        cout<<"It is a vowel"<<endl;
        break;
       default:
        cout<<"It is a consonant"<<endl;
        break;
     }
return 0;
}