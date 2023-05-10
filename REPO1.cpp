#include <iostream>
using namespace std;
class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};
void mahasiswa::showNim() { //implementasi method deluar class
	cout << "no induk =" << nim << endl;

}
int main()
{
	mahasiswa mhs{ 1 };  //object mhs
    mhs.showNim();  //member acces operator

	