#include <iostream>

using namespace std;

int main(){
     int n;

     cout<<"Ingrese el orden de la matriz: "; cin>>n;
     int M[n][n];
     
	 for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
        cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
        cin>>M[i][j];
       }
     }
     
     for( int i=0; i<n; i++){
     for(int j=0; j<n; j++){
     	cout<<M[i][j];
       }
       cout<<"\n";
    }
    
    int sumDiaSecun = 0;
    for (int i=0; i<n; ++i) {
        sumDiaSecun = sumDiaSecun + M[i][n-1-i];
    }
    
    cout<<"La suma de la diagonal secundaria es: "<<sumDiaSecun<<endl;

    return 0;
}
