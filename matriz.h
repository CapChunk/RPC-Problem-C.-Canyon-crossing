#ifndef MATRIZ_H
#define MATRIZ_H
#include <iomanip>
#include <iostream>
using namespace std;
template <typename T,size_t i,size_t j>
class matrx{
    size_t  **r,**c,inx[1][1];
    T value;
    T matrix[i][j];
    T** pontr;

public:

    matrx(){
        if(i<1 || j<1)
         cout<< "Invalid matrix"<<endl;

        r=i;
        c=j;

        pontr  = new T*[i];
        for (int a = 0; a < i; ++a) {
            pontr[a] = new T[j];
        }
        //Construimos la matriz dinamica
    }
    bool empty() const
    {
        bool x=false;
        for (size_t a = 0; a < i; ++a) {
            for (size_t b = 0; b < j; ++b) {
                if(matrix[i][j] == NULL )
               x=true;
                else {
                    x=false;
                     return  x;
                }
            }
        }
        return  x;
    }
    bool full() const{
        bool x=true;
        for (size_t a = 0; a < i; ++a) {
            for (size_t b = 0; b < j; ++b) {
                if(matrix[i][j] == NULL )
                  {  x=false;
                    return  x; }
                else {
                    x=true;
                }
            }
        }
        return  x;
    }

    void insert(const T& val,size_t &r, size_t &c) const
    {
        matrix[r][c] = val;
    }

    void show() const
    {
        for (size_t a = 0; a < i; ++a) {
            cout<<endl;
            for (size_t b = 0; b < j; ++b) {
           cout<<setw(j*3)<<matrix[i][j];
            }
        }
    }

    size_t Bridges(T[i][j],size_t &pu){
        // puentes = bridges
        size_t brid=pu;

    }

};
#endif // MATRIZ_H
