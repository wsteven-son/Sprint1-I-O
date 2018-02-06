#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ip ("/home/coder/Desktop/CSE2341-18S-Young-Stevenson/Sprint1/practice_file_input/dev-train-data.csv");
    if(!ip.is_open()) std::cout <<"Error";
    string id;
    string user;
    string text;
string arr[30000][3];
int i=0;
int x=0;
    while(ip.good()){
        getline(ip,id,',');
        arr[i][x]={id};
        cout<<arr[i][x]<<" | ";
        x++;
        getline(ip,user,',');
        arr[i][x]={user};
        cout<<arr[i][x]<<" | ";
        x++;
        getline(ip,text,'\n');
        arr[i][x]={text};
        cout<<arr[i][x]<<" | "<<'\n'<<'\n';
        int x=0;
    }
         //"ID: "<<id<<"  User: "<<user<<"  Text:  "<<text <<'\n';


    //ip.close();
    return 0;
}
