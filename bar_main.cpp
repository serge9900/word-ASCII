#include<iostream>
using namespace std;

char bar (char*);
int main (){
char ex[10];
cout<<"enter your word: "<<endl;
cin.getline(ex,10);
bar(ex);

}
