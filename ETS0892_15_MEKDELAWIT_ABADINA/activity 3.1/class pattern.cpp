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
    else if(figure="mesob"||figure=="meso"){
        for(int i=1;i<=row;i++){
            for(int k=row-1;k>=i;k--){
                cout<<" ";
            }
           for(int j=1;j<=i;j++){
            cout<<" *";
           }
           cout<<endl;
        }
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
    else if( figure=="dimond"||figure=="dim"){
        for(int i=1;i<=row;i++){
        for(int k=0;k<=i;k++){
            cout<<" ";
        }
        for(int j=row;j>=i;j--){
            cout<<" *";
        }
     cout<<endl;


        }
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
    else if(figure=="toleft"||figure=="t.l"){
       for(int i=1;i<=row;i++){
        for(int k=row-1;k>=i;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
       }
       for(int i=1;i<=row;i++){
        for(int k=0;k<=i;K++){
            cout<<" ";
        }
        for(int j=row;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
       }
    }
    else if(figure=="toright"||figure=="t.r"){
        for( int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
     for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j++){
        cout<<"*";}
        cout<<end;
     }
        
    }
    else{
        cout<<"error";
    }
    




    return 0;
}  