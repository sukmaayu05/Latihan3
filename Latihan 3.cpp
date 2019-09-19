#include<iostream>

using namespace std;

int main(){
	cout <<"A or B" <<endl;
	cout << "0 || 0 = " << ( 0 || 0) << endl;
	cout << "0 || 0 = " << ( 0 || 0) << endl;
	cout << "0 || 1 = " << ( 0 || 1) << endl;
	cout << "0 || 1 = " << ( 0 || 1) << endl;
	cout << "1 || 0 = " << ( 1 || 0) << endl;
	cout << "1 || 0 = " << ( 1 || 0) << endl;
	cout << "1 || 1 = " << ( 1 || 1) << endl;
	cout << "1 || 1 = " << ( 1 || 1) << endl;
	cout<<endl<<endl;
	
	cout <<"A or C" <<endl;
	cout << "0 || 0 = " << ( 0 || 0) << endl;
	cout << "0 || 1 = " << ( 0 || 1) << endl;
	cout << "0 || 0 = " << ( 0 || 0) << endl;
	cout << "0 || 1 = " << ( 0 || 1) << endl;
	cout << "1 || 0 = " << ( 1 || 0) << endl;
	cout << "1 || 1 = " << ( 1 || 1) << endl;
	cout << "1 || 0 = " << ( 1 || 0) << endl;
	cout << "1 || 1 = " << ( 1 || 1) << endl;
	cout<<endl<<endl;
	
	cout <<"(A or B) AND (A or C)" <<endl;
	cout << "0 || 0 && 0 || 0 = " << ( 0 || 0 && 0 || 0) << endl;
	cout << "0 || 0 && 0 || 1 = " << ( 0 || 0 && 0 || 1) << endl;
	cout << "0 || 0 && 0 || 0 = " << ( 0 || 1 && 0 || 0) << endl;
	cout << "0 || 0 && 0 || 1 = " << ( 0 || 1 && 0 || 1) << endl;
	cout << "0 || 0 && 0 || 0 = " << ( 1 || 0 && 1 || 0) << endl;
	cout << "0 || 0 && 0 || 1 = " << ( 1 || 0 && 1 || 1) << endl;
	cout << "0 || 0 && 0 || 0 = " << ( 1 || 1 && 1 || 0) << endl;
	cout << "0 || 0 && 0 || 1 = " << ( 1 || 1 && 1 || 1) << endl;
	return 0;
	
	
	
	
	
	
	
	
	
}
