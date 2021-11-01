#ifndef TEXTFILE_H
#define TEXTFILE_H
#include<fstream>
#include<string>
#include<sstream>

class textfile{
    public:
                textfile();
                textfile(std::string s);
                
                 //declare friend operator overloadings to compare 2 files number of lines.
                friend bool operator>(const textfile &t1, const textfile &t2);     
                friend bool operator==(const textfile &t1, const textfile &t2);
                int get_ch();
                int get_w();
                int get_l();
    protected:
                std::string line;
                std::ifstream  input_data;
                int c = 0, w = 0, l = 0;
};
#endif
