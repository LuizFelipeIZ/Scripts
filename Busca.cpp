#include <iostream>

using namespace std;

int main()
{
	//váriaveis
	int v[100]; //vetor
	int x; //num escolhido para verificação
	int i = 0; //var de incremento 
	int j; //var de incremento
	int pos; //posiçaõ do elemento
	
	//entrada
	cin >> v[i];
	
	while(v[i] != -1)
	{
		i++;
		cin >> v[i];
	}

	cin >> x;
	
	pos = -1;
	
	//busca
	for(j = 0; j < i; j++)
		if(v[j] == x){
			pos = j;
		}
	if(pos != -1){
		cout <<"Possui acesso"<< endl;
	}
	else{
		cout << "Nao possui acesso"<< endl;
	return 0;
	}
	
}
