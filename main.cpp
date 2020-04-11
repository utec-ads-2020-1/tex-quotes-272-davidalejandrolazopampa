//David Lazo 201810010
//UVA 272
#include <iostream>
using namespace std;
#define MAX 999999
int main()
{
    char str[MAX];
    bool comparacion = true;
    //Leer caracteres "gets"
    while(gets(str))
    {
        for(int j = 0; str[j]; ++j)
        {
            if(str[j] == '\"') {
                if (comparacion) { cout << "`" << "`"; }
                else { cout << "\'" << "\'"; }
                comparacion = !comparacion;
            }
            else cout << str[j];
        }
        cout << endl;
    }
    return 0;
}