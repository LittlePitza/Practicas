#include <iostream>
using namespace std;

struct Animal{
	char nombre[20];
	int edad;
	
}animal1, animal2;

int main(int argc, char** argv){
	
	cout<<"Nombre:";
	cin.getline(animal2.nombre, 20, '\n');
	cout<<"Edad: ";
	cin>>animal2.edad;
	cout<<animal2.nombre<<endl;
	cout<<animal2.edad<<endl;
	system("pause");
		//712 126 6570
	
	
	return 0;
}
