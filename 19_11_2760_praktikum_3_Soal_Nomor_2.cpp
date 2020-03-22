#include <iostream>

using namespace std;

string ambilNilai(int *tunjuk);

int main()
{
    int nilai;
    cout << "Masukan Nilainya : ";
    cin >> nilai;

    cout << "Nilai : " << ambilNilai(&nilai) << endl;
    return 0;
}

string ambilNilai(int *tunjuk){
    switch(*tunjuk){
    case 90 ... 100:
        return "A";
        break;
    case 80 ... 89:
        return "B";
        break;
    case 70 ... 79:
        return "C";
        break;
    case 60 ... 69:
        return "D";
        break;
    case 50 ... 59:
        return "E";
        break;
    case 0 ... 49:
        return "Tidak Lulus";
        break;

    }
}
