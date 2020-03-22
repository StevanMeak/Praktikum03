#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> explode(string inputstring, string delimiter){
    vector<string> explodes;
    inputstring.append(delimiter);
    while(inputstring.find(delimiter)!=string::npos){
        explodes.push_back(inputstring.substr(0, inputstring.find(delimiter)));
        inputstring.erase(inputstring.begin(), inputstring.begin()+inputstring.find(delimiter)+delimiter.size());
    }
    return explodes;
}
int main(){
    int jumlahKata = 0;
    string a="Halo Saya Stevan Meak", delimiter=" ";
    cout<<a<< endl;

    vector<string> explodes=explode(a, delimiter);
    for (int i=0;i<(int)explodes.size();i++){
        jumlahKata++;
    }
     cout<<"Jumlah katanya : "<<jumlahKata<<endl;
    return 0;
}
