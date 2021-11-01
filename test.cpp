#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int string_to_int(string s){
    istringstream instr(s);
    int n;
    instr >> n;
    return n;
}

int main() {
    // ifstream input_data;
    // input_data.open("JFMAbstract.txt");
    // string s;
    // getline(input_data,s);
    // cout << s <<endl;
    // input_data.close();

    // ofstream output_data;
    // output_data.open("text.txt");
    // output_data << "asdw" <<endl;
    // output_data <<"123";
    // output_data.close();

    // string input = "January 23, 1955";
    // istringstream instr(input);
    // string month;
    // int day;
    // string comma;
    // int year;
    // instr >> month >> day >> comma >> year;
    // cout << month << day << comma << year;

    // int i = string_to_int("1999");
    // cout << i;

    // ostringstream outstr;
    // string month = "January";
    // int day = 23;
    // int year = 1955;
    // outstr << month << " " << day << ", " << year;
    // string output = outstr.str();
    // cout<< output;

    return 0;
}