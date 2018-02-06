#include <iostream>
#iclude <QFile>
#iclude <QTextStream>
#include <QmessageBox>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    QFile file("/home/coder/Desktop/CSE2341-18S-Young-Stevenson/Sprint1/practice_file_input");
    if (!file.open(QFile::WriteOnly | QFile::Text))

    return 0;
}
