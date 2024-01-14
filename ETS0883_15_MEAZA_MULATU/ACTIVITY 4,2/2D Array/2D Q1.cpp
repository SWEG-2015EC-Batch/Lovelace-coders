#include <iostream>

using namespace std;

int main()
{
    float first[5]={1,2,3,4,5};
    float second[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(first[i]!=second[i]){
            cout<<"The two arrays do not have identical elements" <<endl;
            break;}
        else if((i==4)&&(first[i]==second[i])){
            cout<<"The two arrays have identical elements"<<endl;
        }

    }

    return 0;
}
