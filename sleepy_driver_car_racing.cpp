#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main () {
  srand(time(0));
  const int size=60;
  cout << "#####################################################\n";
  cout << "********WELCOME TO THE GAME OF SLEEPY DRIVER*********\n";
  cout << "#####################################################\n";
  cout << "Enter your favourite letter to begin with (Driver's Name)\n ";
  char x; 
  cin >> x;
  int position = size / 2;
  while (true) {
    cout << "<|||||>START<|||||>" ;
    for (int i=0; i<size;i++) {
      if (i == position) 
        cout << x;
      else cout << " ";
    }
    cout << "<|||||>FINISH<|||||>" << "\n";
    int move= rand()%3 - 1;
    position = position + move; 
    if (position < 1) {
      cout << "***********ohh nooo*****************\n";
      cout << "You could not finish the race!" << "\n"; 
      break;
    }
    if (position > size-1) {
      cout << "************Hurrayyyyy**************\n";
      cout << "Yay! You finished the race" << "\n"; 
      break;
    }
    for(int sleep=0; sleep< 1000000 ; ++sleep);
  }   
  return 0; 
}