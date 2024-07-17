#include <iostream>

using namespace std;

int main(){
     int n;

     cout<<"Ingrese el orden de la matriz: "; cin>>n;
     int M[n][3*n];
     
	 for(int i=0; i<n; i++){
     for(int j=0; j<3*n; j++){
        M[i][j]=0;
       }
     }
     
     for(int j=0; j<3*n; j++){ 
     	M[0][j]=1;
       }
       
    for(int j=0; j<3*n; j++){ 
     	M[n-1][j]=1;
       }
       
    for (int i=0; i<n; ++i) {
        M[i][0]=1;
       }
    
    for (int i=0; i<n; ++i) {
        M[i][3*n-1]=1;
       }
    
     for(int i=0; i<n; i++){
     for(int j=0; j<3*n; j++){
     	cout<<M[i][j]<< " ";
        }
      cout<<endl;
    }
    
	return 0;
}
