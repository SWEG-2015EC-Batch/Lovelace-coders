#include<iostream>
using namespace std;
int main(){
    string figure;
    int row;
    cout<<"enter type of figure you want";
    cin>>figure;
    cout<<"enter number of row";
    cin>>row;

    if(figure=="h.p.l.d"||figure=="half piramid left down"){
      for(int i=1;i<=row;i++)
      {
        for(int k=row-1;k>=i;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<endl;
       }



    }
    else if(figure==" half priamid left up"||figure=="h.p.l.u"){
      for(int i=1;i<=row;i++){
        for(int k=0;k<=i;k++){
            cout<<" ";
        }
        for(int j=row;j>=i;j--){
            cout<<"*";
        }
     cout<<endl;


        }

    }
    else if(figure=="full piramid down"||figure=="f.p.d"){
     for(int i=1;i<=row;i++){
        for(int k=0;k<=i;k++){
            cout<<" ";
        }
        for(int j=row;j>=i;j--){
            cout<<" *";
        }
     cout<<endl;


        }

    }
    else if(figure=="full piramid up"||figure=="f.p.u"){
        for(int i=1;i<=row;i++){
            for(int k=row-1;k>=i;k--){
                cout<<" ";
            }
           for(int j=1;j<=i;j++){
            cout<<" *";
           }
           cout<<endl;
        }
    }
   else if( figure=="half piramid right dowm"||figure=="h.p.r.d"){
       for(int i=1;i<=row;i++){
        for(int j=1;j<=1;j++){
            cout<<"*";
        }
        cout<<endl;
       }
   }
   else if( figure=="half piramid right up"||figure=="h.p.r.u"){
     for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
     }
   }
   else if( figure=="rectangel"||figure=="rec"){
     for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            cout<<"*";
        }
      cout<<endl;
     }
   }
   else if( figure=="half pyramid using alphabet")
    for(i=0; i<6; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    cout<<endl;
   else if( figure=="half pyramid using numbers")
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    else if( figure="hallow full pyramid")
        int rows = 6;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        while (k != 2 * i - 1) {
            if (k == 0 || k == 2 * i - 2 || i == rows) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            ++k;
        }
        cout << endl;
    }
    else if( figure=="hallow rectangle ")
         int rows = 7;
    int columns = 8;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    else if(figure=="square using letters")
        int rows = 5;
    int cols = 5;
    char currentLetter = 'a';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << currentLetter << " ";
            currentLetter++;
            if (currentLetter > 'e') {
                currentLetter = 'a';
            }
        }
        cout << endl;
    }
    else if(figure=="rectangle using upper case")
        int rows = 4;
    int cols = 6;
    char currentLetter = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << currentLetter << " ";
            currentLetter++;
            if (currentLetter > 'X') {
                currentLetter = 'A';
            }
        }
        cout << endl;
    }

    else{
        cout<<"error";
    }





    return 0;
}
