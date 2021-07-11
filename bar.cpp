#include<iostream>
using namespace std;

 void bar (char b[]){
 	for (int i=0; i<10; i++){
 		if (b[i]>90){
			b[i]-=32;
		}
		else {b[i]+=32;}
 }
	cout<<b<<endl;
 }

