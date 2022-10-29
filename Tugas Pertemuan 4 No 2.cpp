#include<iostream>
using namespace std;
int main()
{
	string username, password;
	cout<< "Masukkan Username : ";
	cin>>username;
	cout<< "Masukkan Password : ";
	cin>>password;
	if ( username == "adityarizky" && password == "aditya123")
		cout<< "Username dan Password sesuai, Login berhasil" <<endl;
	else if ( username != "adityarizky" || password != "aditya123")
		if ( username == "adityarizky" && password != "aditya123")
			cout<< "Username sesuai, Password tidak sesuai" <<endl;
		else if ( username != "adityarizky" && password == "aditya123")
			cout<< "Username tidak sesuai, Password sesuai" <<endl;
	else
		cout<< "Username dan Password tidak sesuai"<<endl;
 	
	return 0;
}