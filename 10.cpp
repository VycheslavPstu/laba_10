#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


void print_vector(vector<string> vec)
{
    cout << "{";
    for (int i=0; i < vec.size()-1; i++)
    {
        cout << vec[i] << ", ";
    }
    cout << vec[vec.size()-1] << "}\n";
}

int main()
{
    cout << "Задание 1\n";
    vector <string> vec = {"Bebra", "Bebra", "Лютый", "смачный", "сочный", "пукиш", "пукиш", "пукиш", "обработка"};
    print_vector(vec);
    
    for (int j=0; j < vec.size(); j++)
    {
        if (count(vec.begin(), vec.end(), vec[j]) > 1){
            vec.erase(vec.begin()+j);
        }
    }
    print_vector(vec);
    
    int k;
    cout << "\n\nЗадание 2\nK = "; cin >> k;
    vector <string> vec2 = {"Bebra", "Bebra", "Лютый", "смачный", "сочный"};
    print_vector(vec);
    for (int n=0; n < vec2.size(); n++)
    {
        if (not (n < vec2.size()-k)){
            vec.erase(vec2.begin()+n);
        }
    }
    print_vector(vec);

    return 0;
}
