#include <iostream>
#include<string>
#include<clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int sifrelenen=0;
    int sifrelenmeyen = 0;
    char harf = 'a';
    char harf2 = 'e';
    char harf3 = 'i';
    char harf4 = 'ı';
    char harf5 = 'ö';
    char harf6 = 'o';
    char harf7 = 'ü';
    char harf8 = 'u';
    string cumle;
    cout << "bir cumle giriniz:";
    getline(cin, cumle);
    for (char& c : cumle)
    {
        c = tolower(c);
    }
    cout << "cumleniz:" <<cumle<<endl<<endl;
    for (int i = 0; i < cumle.length(); ++i)
    {
        if (cumle[i] == harf)
        {
            cumle[i] = '?';
            
           
        }
        else if (cumle[i] == harf2)
        {
            cumle[i] = '*';
        }
        else if (cumle[i] == harf3)
        {
            cumle[i] = '=';
        }
        else if (cumle[i] == harf4)
        {
            cumle[i] = '=';
        }
        else if (cumle[i] == harf5)
        {
            cumle[i] = '&';
        }
        else if (cumle[i] == harf6)
        {
            cumle[i] = '&';
        }
        else if (cumle[i] == harf7)
        {
            cumle[i] = '+';
        }
        else if (cumle[i] == harf8)
        {
            cumle[i] = '+';
        }
    }
    for (int i = cumle.length(); i >= 0; --i)
    {
         

        cout << cumle[i];
    }
    cout << endl;
    for (char c: cumle)
    {
        if (c == '?' || c == '*' || c == '=' || c == '&' || c == '+')
        {
            sifrelenen++;
        }
        else
        {
            sifrelenmeyen++;
        }
    }
    cout << "sifrelenen harf sayisi=" << sifrelenen<<endl;
    cout << "sifrelenmeyen harf sayisi=" << sifrelenmeyen << endl;
   
        
        
}



