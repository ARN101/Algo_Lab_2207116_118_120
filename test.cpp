#include <bits/stdc++.h>
using namespace std;

char rubic[6][2][2] = {
    {{'R','R'}, {'R','R'}}, 
    {{'G','G'}, {'G','G'}}, 
    {{'B','B'}, {'B','B'}}, 
    {{'O','O'}, {'O','O'}}, 
    {{'W','W'}, {'W','W'}}, 
    {{'Y','Y'}, {'Y','Y'}}  
};

void display() {

    for(int i=0; i<2; i++) {

        cout << "    ";
        for(int j=0; j<2; j++) cout << rubic[4][i][j] << " ";
        cout << endl;
    }
    
    for(int i=0; i<2; i++) {


        for(int j=0; j<2; j++) cout << rubic[3][i][j] << " ";
        
        for(int j=0; j<2; j++) cout << rubic[1][i][j] << " ";
        
        for(int j=0; j<2; j++) cout << rubic[0][i][j] << " ";
        
        for(int j=0; j<2; j++) cout << rubic[2][i][j] << " ";
        
        cout << endl;
    }

    for(int i=0; i<2; i++) {

        cout << "    ";

        for(int j=0; j<2; j++) cout << rubic[5][i][j] << " ";
        cout << endl;
    }
    cout << endl;
}


void r(){
   rubic[0][0][1]= rubic[3][0][1];
    rubic[0][1][1]= rubic[3][1][1];
    rubic[1][0][1]= rubic[0][0][1];
    rubic[1][1][1]= rubic[0][1][1];
    rubic[2][0][1]= rubic[1][0][1];
    rubic[2][1][1]= rubic[1][1][1];
    rubic[3][0][1]= rubic[2][0][1];
    rubic[3][1][1]= rubic[2][1][1];
    rubic[5][0][0]= rubic[5][1][0];
    rubic[5][0][1]= rubic[5][0][0];
    rubic[5][1][1]= rubic[5][0][1];
    rubic[5][1][0]= rubic[5][1][1];

}


void d(){
 

}

void dInv(){

}

void u(){

}

void uInv(){

}


void rInv(){

}
void l(){

}

void lInv(){

}


int main(){
    char move;
    display();
    while(cin >> move){
        
        display();
    }
}