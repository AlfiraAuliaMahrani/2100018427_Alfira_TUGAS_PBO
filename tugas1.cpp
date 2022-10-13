#include <iostream>
using namespace std;
int main(){
	
    char a[5]={'a','b','c','d','e'};  
	int b;
    int x[3][3] = {{1,2}, {3,4}, {5,6}};
    int f = 0;
    cout << "=============================" << endl;
	cout << "|       MASUKAN DATA         |"<< endl;
	cout << "=============================" << endl << endl;
	
    cout<<"Nilai : "; cin>>b;           //input
     if (b%2==0){ // if percabangan
        cout<<b<<" Adalah bilangan genap"<<endl<<endl;
    }else{
        cout<<b<<" Adalah bilangan ganjil"<<endl<<endl;
    }
    cout<<endl;
    //perulangan For & array 1D
    cout<<"Array 1D"<<endl;
    for(int i=0; i<5; i++){      
        cout<<"index "<<i<<" = "<<a[i]<<endl;     //output
    }
    cout<<endl<<endl;
    cout << "=============================" << endl;
	cout << "|        PERULANGAN         |"<< endl;
	cout << "=============================" << endl << endl;
    
    //While
    while (f < 5) { 
        cout << "Alfira"<<endl;
        f++;
    }
    cout<<endl<<endl;
    //Do while
    int e = 0;
    do { 
        cout << "Selamat Datang" <<endl;
    e++;
    }
    while (e < 5);

	cout<<endl<<endl<< "Array 2D"<<endl;
    for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
}
