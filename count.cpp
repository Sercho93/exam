#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int CheckFile(string fileName){
  ifstream InList;
  InList.open(fileName.c_str());
  if (InList.is_open()) {
    cout << "File Open" << endl;
    cout << endl;
    return 1;
    } else {
    return 0;
  }
}

int ReadFile(string word, string fname){
  int counter;
  string foundWord;
  ifstream InList;
  InList.open(fname.c_str());
  while (!InList.eof()) {
      InList >> foundWord;
      if (foundWord == word) {
          counter++;
      }
    }
    InList.close();
    return counter;
}

int main(){
  string word, fname;
  cout <<"Enter the File name with .txt at the end:" << endl;
  cin >> fname;
  if (CheckFile(fname)==0) {
    cout << "Please check the File name and location." << endl;
  }
  cout <<"Enter the word to search: " << endl;
  cin >> word;
  cout << endl << "The word " << '"' <<  word << '"' <<" was found " << ReadFile(word, fname) << " time(s) in the File." << endl;
}
