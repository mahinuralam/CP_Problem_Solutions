#include<bits/stdc++.h>
using namespace std;
void input(int array[][3], int array1[][1]);
int determinent(int array[][3]);
int calculate(int array[][3], int a, int b, int c);
int copy(int array[][3], int array1[][1], int a);
void comp_copy(int array[][3], int array1[][3]);
int main()
{
    cout<<"Enter a 3 by 3 matrix from a given system. First, enter the 1st row, then,\n";
   cout<<"\nthe first entry on the right side of the equality.  \n\n";
    cout<<"Provide a space for each number. \n";
   cout<<"\nLike this:\n\n";
    cout<<"  3  4  5    6 -> 6 is the number on the right side of the equality\n";
    cout<<"  2  7  5    3 \n";
    cout<<"  1  3  4    2 \n";
    bool sahi=true;
    while(sahi)
    {
        cout<<"Enter now...\n";
        int matrix[3][3];
        int matrix1[3][1];
        int reserve[3][3];
        int det00, detr[3], sp1=0,cont=0, teen=1;
        char in;
        input(matrix, matrix1);
        comp_copy(reserve, matrix);
        det00=determinent(matrix);
        while(sp1<3)
        {
            detr[cont]=copy(matrix, matrix1, sp1);
            comp_copy(matrix,reserve);
            cont++;
            sp1++;
        }
        cont=0;
        while(cont<3)
        {
            cout<<"x"<<teen<<" = "<<  detr[cont]<<" /"<<det00<<endl;
            cont++;
            teen++;
        }
        cout<<"If you want to exit press n else press any key\n";
        cin>>in;
        if(in=='n' || in=='N')
            return 1;
    }
    return 0;
}
void input(int array[][3], int array1[][1])
{
    int rows=0, col=0, x=0;
    while(rows<3)
    {
        col=0;
        while(col<3)
        {
            cin>>array[rows][col];
            col++;
        }
        cin>>array1[x][0];
        x++;
        rows++;
    }
}
int determinent(int array[][3])
{
    int rows=1, col=1;
    int z=0;
         int temp=0;
         int cont=1;
         int x=0;
         while(x<3)
         {
             temp=temp+cont*(array[0][x]*calculate(array,rows, col, z));
             col=col*0;
             z=z+cont;
             cont=cont*-1;
             x++;
         }
    cout<<"\nDeterminant of the matrix above is "<<temp<<"\n\n";
    return temp;
}
int calculate(int array[][3], int a, int b, int c)
{
    int temp1;
    temp1=(array[a][b]*array[a+1][b+1+c])-(array[a+1][b]*array[a][b+1+c]);
    return temp1;
}
int copy(int array[][3], int array1[][1], int a)
{
    int col=0;
    int temp;
    while(col<3)
    {
        array[col][a]=array1[col][0];
        col++;
    }
    int i=0, j=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            cout<<array[i][j]<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
    temp=determinent(array);
    return temp;
}
void comp_copy(int array[][3], int array1[][3])
{
    int rows=0, col=0;
    while(rows<3)
    {
        col=0;
        while(col<3)
        {
            array[rows][col]=array1[rows][col];
            col++;
        }
        rows++;
    }
}
