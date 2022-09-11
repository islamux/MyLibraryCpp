#include <iostream>
using namespace std;

enum enPassFailed{Pass=1, Failed=2};
int ReadMark(){
    int mark;
    cout << "Enter a mark: " << "\n";
    cin >> mark;
    return mark;
}
enPassFailed CheckMark(int mark){
    if(mark >50)
        return enPassFailed::Pass;
    else
        return enPassFailed::Failed;
}
