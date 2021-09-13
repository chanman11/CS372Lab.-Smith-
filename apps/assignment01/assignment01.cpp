//
// File:   assignment1.cpp
// Author: <PUT YOUR NAME HERE>
// Purpose:
// Illustrate some of the bad thins that can happen with
// pointers
//
#include <iostream>
#include <string>
using namespace std;


void q3()
{
	string word;
	int* a = word;
	int *b = new string;
	return *b;
}

int main() {
	//question 1
  int * ptr = new int[25];
  int n = 0;
  for(int i = 1; i<26; i++)
  {
	  ptr[i] = n;
	  n++;
  }
  int ptr2 = *ptr;
  delete [] ptr;
  for(int i = 1; i<11; i++)
  {
	  cout<<&ptr2[i];
  }
  
  //question 2
  
  int* a = NULL;
  int* b = NULL;
  int n = 25;
  a = new int[n];
  b = new int[n];
  delete [] a;
  cout<<"address is: "<<&b;
  
  for (int i=0; i<10; i++) 
  {
    cout<<b[i];
  }
  
  string newstring = q3();
  cout<<newstring;
  
  return 0;
}
