#include <iostream>

using namespace std;

//return a ^ n
int pot(int a, int n)
{
	if (n == 0)
		return 1;
	else
		return a * pot(a, n - 1);
}

int main()
{
	int a; //base
	int n; //expoente 
	int result; //resultado final
	
	cin >> a >> n;
	
	//chamando a função
	result = pot(a,n);
	
	//saída
	cout << result << endl;
	
	return 0;
}
