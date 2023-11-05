#include <iostream>
using namespace std;

int main() {
		
		int hasil;
		
		cout<<"Masukkan jumlah kotak yang akan anda buat(1-30): ";
		cin>>hasil;
		int jml=hasil*2+1;
		int b=1;
		for(b=1;b<=jml;b++){
		if (b%2==0){
				cout<<"__";
				
			}
			else{
			cout<<" ";
		}
		}
		cout<<endl;	
	for(int d=1;d<=hasil;d++){
	
		int c=1;
		for(c=1;c<=jml;c++){
			
			if (c%2==0){
				cout<<"__";
				
			}
			else{
			cout<<"|";
		}
			
		}
		cout<<endl;	
	
}
	

}



