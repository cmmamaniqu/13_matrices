#include <iostream>

using namespace std;

int main(){
	char S[1][5];
	char SEM;
	
	cout<<"Venta de cuatro semanas: "<<endl;
	cout<<"-----------------------------------"<<endl;
	
	 for(int i=0; i<1; i++){
     for(int j=0; j<4; j++){
        cout<<S[i][j]<<"  SEM "<< i+1;
        i++;
	 }
   } 
    int n;
    cin>>n;
     int M[7][4];
     for(int i=0; i<7; i++){
     for(int j=0; j<4; j++){
     	cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
        cin>>M[i][j];
     }
    }
    for(int i=0; i<7; i++){
     for(int j=0; j<4; j++){
     //	cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
        cout<<M[i][j]<<"     ";
    }
    cout <<" \n";
    }
    int s;
    for(int i=0; i<7; i++){
    	s=s + M[i][0];
    } 
    
  
    cout<<s;

return 0;
}