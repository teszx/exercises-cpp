//Programa de Media Escolar

#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3,n4,resultado;


    cout<<"Digite a nota:";
    cin >> n1;
    cout<< "Digite a segunda nota:";
    cin >> n2;
    cout <<"Digite a terceira nota:";
    cin >> n3;
    cout<<"Digite a ultima nota:";
    cin >> n4;

   resultado = (n1 + n2 + n3 + n4)/4;

   if (resultado >=6){
       cout << "Aprovado, media:" << resultado << endl;
   }
   else if (resultado < 6)
   {
       cout<<"Reprovado, media:" << resultado << endl;
   }

   return 0;

}
