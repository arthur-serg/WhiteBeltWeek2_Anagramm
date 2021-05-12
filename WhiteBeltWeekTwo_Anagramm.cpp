// WhiteBeltWeekTwo_Anagramm.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

void PrintMap(const map<int, string>& map) {
    for (const auto& elem : map) {
        cout << elem.first << " " << elem.second << endl; 
    }
}

map<char, int> BuildCharCounters(const string& s) {
    map<char, int> result;
    for (int i = 0; i < s.size(); i++)
    {
        ++result[s[i]];
    }
    return result;
}

int main()
{
    int n;
    map<char, int> mapOne;
    map<char, int> mapTwo;
    string stringOne;
    string stringTwo;
    cout << "enter number of pairs: " << endl;
    cin >> n;
    while (n) {
        cin >> stringOne >> stringTwo;
        mapOne = BuildCharCounters(stringOne);
        mapTwo = BuildCharCounters(stringTwo);
        if (mapOne == mapTwo) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
        --n;
    }
}
