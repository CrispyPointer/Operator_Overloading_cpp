#include "textfile.h"
#include <iostream>
using namespace std;

int main(){
    string file1,file2;
    cout << "Enter the name of file 1: ";
    cin >> file1;
    cout << "Enter the name of file 2: ";
    cin >> file2;
    textfile text1(file1);
    textfile text2(file2);
    
    ofstream prop("Properties.txt");
    prop << "File name: "<<file1<<endl;
    prop << "Number of characters is: " << text1.get_ch()<<endl;
    prop << "Number of words is: "<<text1.get_w()<<'\n'<<endl;

    prop << "File name: "<<file2<<endl;
    prop << "Number of characters is: " << text2.get_ch()<<endl;
    prop << "Number of words is: "<<text2.get_w()<<'\n'<<endl;

    if (text1 > text2) prop << "The file named: "<<file1<<" has more lines than "<<file2;
    else if (!(text1 > text2)) prop << "The file named: "<<file1<<" has less lines than "<<file2;
    else if (text1 == text2) prop << "The file named: "<<file1<<" has the same lines as "<<file2;
}
