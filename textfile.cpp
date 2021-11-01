#include "textfile.h"

using namespace std;

textfile::textfile(string s){
    char word[10];
    input_data.open(s);
    input_data.seekg(0,ios::beg);

    //This loop reads the file record inside the loop condition and if nothing was read due to the end of file being reached
    //When a word is recorded, number of words increase.
    while(!input_data.eof())
	{
		input_data>>word;
		w++;
	}
    input_data.close();

    input_data.open(s);
    //Each time getline finishes, count the number of characters and lines.
    while(getline(input_data, line)){
        c+=line.length();
        l++;
    }
    input_data.close();
}

//Compare the number of lines from 2 textfile.
bool operator > (const textfile &t1, const textfile &t2){
    if (t1.l > t2.l) return true;
    else return false;
}

bool operator==(const textfile &t1, const textfile &t2){
    if (t1.l == t2.l) return true;
    else return false;
}

int textfile::get_l(){
    return l;
}

int textfile::get_w(){
    return w;
}

int textfile::get_ch(){
    return c;
}

