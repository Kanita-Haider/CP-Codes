#include<bits/stdc++.h>
using namespace std;

void display(double mat[][3]){
    printf("\nThe Elements of the matrix are :");
    for(int r = 0; r < 3; r++){
        cout<<"\n";
        for(int c = 0; c < 3; c++){
            cout<<mat[r][c]<<"\t";
        }
    }
}

double findDeterminant(double mat[][3]){
    double det=0; 
    for(int r = 0; r < 3; r++){
        det = det + (mat[0][r]*(mat[1][(r+1)%3]*mat[2][(r+2)%3]-mat[1][(r+2)%3]*mat[2][(r+1)%3]));
    }
    return det;
}

void adjoint(double mat[][3]){
    cout<<"\n\nAdjoint of matrix is: \n";
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            cout<<((mat[(c+1)%3][(r+1)%3]*mat[(c+2)%3][(r+2)%3])-(mat[(c+1)%3][(r+2)%3]*mat[(c+2)%3][(r+1)%3]))<<"\t";
        }
        cout<<endl;
    }
}

void inverse(double mat[][3],double d){
        cout<<"\nInverse of matrix is: \n";
        for(int r = 0; r < 3; r++){
            for(int c = 0; c < 3; c++){
                cout<<((mat[(c+1)%3][(r+1)%3]*mat[(c+2)%3][(r+2)%3])-(mat[(c+1)%3][(r+2)%3]*mat[(c+2)%3][(r+1)%3]))/d<<"\t";
            
            }
            cout<<endl;
        }
    }

int main() {

    double mat[3][3];
    int r,c;
    double determinant=0;
    for(r = 0; r < 3; r++){
        for(c = 0;  c< 3; c++){
            cin>>mat[r][c];
        }
    }
    display(mat);
    determinant=findDeterminant(mat);
    cout<<"\n\ndeterminant "<<determinant;

    if(determinant!=0){
        adjoint(mat);
        inverse(mat,determinant);
    }
    else
    {
        cout<<" Inversion of the Matrix os impossible.";
    }

    return 0;
}