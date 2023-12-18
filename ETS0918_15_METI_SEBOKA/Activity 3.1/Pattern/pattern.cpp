#include <iostream>
using namespace std;

//Rectangle Pattern

void rect(int row, int column)
{
    int i, j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < column)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Number rectangle

void numrect(int row, int column)
{
    int i, j;

    i = 0;
    while (i < row)
    {
        j = 1;
        while (j < column + 1)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Letter rectangle

void letrect(int row, int column)
{
    int i, j;
    char letter;

    i = 0;
    while (i < row)
    {
        j = 1;
        letter = 'a';
        while (j < column + 1)
        {
            cout<<letter<<" ";
            letter++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Capital rectangle

void caprect(int row, int column)
{
    int i, j;
    char letter = 'A';

    i = 0;
    while (i < row)
    {
        j = 1;
        while (j < column + 1)
        {
            cout<<letter<<" ";
            letter++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Hollow rectangle

void halrect(int row, int column)
{
    int i, j;

    i = 1;
    while (i < row + 1)
    {
        j = 1;
        while (j < column + 1)
        {
            if (j == 1 || j == column || i == 1 || i == row)
                cout<<"* ";
            else
                cout<<"  ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Triangle Pattern

void tri(int row)
{
    int i, j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j <= i)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Hallow Triangle Pattern

void haltri(int row)
{
    int i, j;

    cout<<"*"<<endl;
    i = 1;
    while (i < row + 1)
    {
        j = 1;
        while (j <= i + 1)
        {
            if (i == 1 || i == row || j == 1 || j == i + 1)
                cout<<"* ";
            else
                cout<<"  ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Number Triangle Pattern

void numtri(int row)
{
    int i, j;

    i = 0;
    while (i < row)
    {
        j = 1;
        while (j <= i + 1)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Letter Triangle Pattern

void lettri(int row)
{
    int i, j;
    char letter;

    i = 0;
    while (i < row)
    {
        j = 1;
        letter = 'A';
        while (j <= i + 1)
        {
            cout<<letter<<" ";
            letter++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Inverted Triangle Pattern

void inver(int row)
{
    int i, j;

    i = row;
    while (i > 0)
    {
        j = i;
        while (j > 0 && j <= i)
        {
            cout<<"*";
            j--;
        }
        cout<<"\n";
        i--;
    }
}

//Pyramid

void pyramid(int row)
{
    int i, j;

    i = 1;
    while (i < row)
    {
        j = i;
        while (j < row)
        {
            cout<<" ";
            j++;
        }
        j = 0;
        while (j < (2 * i - 1))
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Inverted Pyramid

void inverPyramid(int row)
{
    int i, j;

    i = row;
    while (i > 0)
    {
        j = 0;
        while (j < row - i)
        {
            cout<<" ";
            j++;
        }
        j = i;
        while (j <= (2 * i - 1))
        {
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i--;
    }
}

int main(void)
{
    int choice;

    cout<<"Pattern Menu\n"<<endl;

    cout<<"Choose:\n\t1 for Rectangle\n\t2 for Triangle\n\t3 for Inverted Triangle\n\t4 for Pyramid\n\t5 for Inverted Pyramid"<<endl;
    cout<<"\t6 for Number Rectangle\n\t7 for Number Triangle\n\t8 for Letter Triangle\n\t9 for Letter Rectangle\n\t10 for Capital Rectangle"<<endl;
    cout<<"\t11 for Hallow Rectangle\n\t12 for Hallow Triangle"<<endl;
    cin>>choice;


    switch (choice)
    {
        case 1:
            int row, column;
            cout<<"Enter row and column: ";
            cin>>row>>column;

            rect(row, column);
            break;
        case 2:
            cout<<"Enter row: ";
            cin>>row;

            tri(row);
            break;
        case 3:
            cout<<"Enter row: ";
            cin>> row;
            
            inver(row);
            break;
        case 4:
            cout<<"Enter row: ";
            cin>>row;

            pyramid(row);
            break;
        case 5:
            cout<<"Enter row: ";
            cin>>row;

            inverPyramid(row);
            break;
        case 6:
            cout<<"Enter row, column: ";
            cin>>row>>column;
            numrect(row, column);
            break;
        case 7:
            cout<<"Enter row: ";
            cin>>row;
            numtri(row);
            break;
        case 8:
            cout<<"Enter row: ";
            cin>>row;
            lettri(row);
            break;
        case 9:
            cout<<"Enter row, column: ";
            cin>>row>>column;
            letrect(row, column);
            break;
        case 10:
            cout<<"Enter row, column: ";
            cin>>row>>column;
            caprect(row, column);
            break;      
        case 11:
            cout<<"Enter row, column: ";
            cin>>row>>column;
            halrect(row, column);
            break;       
        case 12:
            cout<<"Enter row: ";
            cin>>row;
            haltri(row);
            break;    
        default:
            cout<<"There is no such shape"<<endl;
    }

    return (0);
}
