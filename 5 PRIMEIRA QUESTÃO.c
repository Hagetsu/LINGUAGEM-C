#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int Square (int soma)

{
int result;
result=soma;
return (result);
}
int main()
{
cout << " <<< EX. 1 CAP.10 >>>\n\n\n";
int n, num, param, quad, soma=0;
cout << "ESCOLHA UM N�MERO COMO PARAMETRO: ";
cin >> n;
param=n;
while(num!=param)
{
cout << "ESCOLHA UM N�MERO:  ";
cin >> num;
soma=soma+n;
quad=Square(soma);
cout << "A SOMA DO N�MERO 1 AT� O �LTIMO N�MERO DIGITADO VALE: " << quad << endl;
cout << "\n";
}
system("Pause");

return 0;
}
