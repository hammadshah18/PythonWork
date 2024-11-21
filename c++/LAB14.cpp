#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


void PrintMat(int mat[][20], int n, string vertices[]) {
    int i, j;

    cout << "\n\n" << setw(4) << ""; 
    for(i = 0; i < n; i++)
        cout << setw(8) << vertices[i]; 
    cout << "\n\n";

    
    for(i = 0; i < n; i++) {
        cout << setw(8) << vertices[i];  
        for(j = 0; j < n; j++) {
            cout << setw(8) << mat[i][j]; 
        }
        cout << "\n\n";
    }
}

int main() {
	cout<<" roll number: 23CS050"<<endl;
	
    int i, j, v;

    
    cout << "Enter the number of vertices: ";
    cin >> v;


    int mat[20][20] = {0};  
    

    string vertices[20];

    
    cout << "Enter the names of the vertices:\n";
    for(i = 0; i < v; i++) {
        cin >> vertices[i];
    }

    
    for(i = 0; i < v; i++) {
        for(j = i; j < v; j++) {
            if(i != j) {
                
                cout << "Enter 1 if " << vertices[i] << " is adjacent to " << vertices[j] << ", otherwise 0: ";
                cin >> mat[i][j];
                mat[j][i] = mat[i][j]; 
            } else {
                mat[i][j] = 0; 
            }
        }
    }

    
    PrintMat(mat, v, vertices);

    return 0;
}