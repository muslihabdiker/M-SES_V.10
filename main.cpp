#include <iostream>
/* --MUSLIH SIMULTANOUS EQUATION SOLVER(M-SES)--
 The development of this software has been started by MUSLIH ALI. No one has

 the right to reproduce , copy or use this software in any commercial activities other than
 research or education.

 The software is free to use to everyone , but for commercial purposes , please contact the developer.

 info@muslih.tech

M.A.A

// this software is currently under development and you might encounter errors.Please inform the developer
incase of bugs or errors to avoid harm to other users.

*/
using namespace std;

class multiplier {
public:


    void calculator(int a1, int a2,int x,int y,int x1,int y1) {
        int matrix[2][2] = {
  {x*1,y*1},
   {x1*1,y1*1}
};
// matrix determinant and inverse
double deter = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
double deterSQ = (deter*deter);
double iD = (deter/deterSQ);
//inverse and matrix multiplication
int nMat[2][2] = {
 {matrix[1][1],(matrix[0][1]*-1)},
   {(matrix[1][0]*-1),matrix[0][0]}
};
double IM[2][2] = {
     {nMat[0][0]*iD,nMat[0][1]*iD},
   {nMat[1][0]*iD,nMat[1][1]*iD}
};
//cout << IM[0][0]<<"\t"<< IM[0][1]<<"\n"<< IM[1][0]<<"\t"<< IM[1][1]<<"\t"<< endl;
//cout << matrix[0][0]<<"\t"<< matrix[0][1]<<"\n"<< matrix[1][0]<<"\t"<< matrix[1][1]<<"\t"<< endl;
// final answer calculation
double ansX = (IM[0][0]*a1) + (IM[0][1]* a2);
double ansY = (IM[1][0]*a1) + (IM[1][1]* a2);
cout << ansX << endl;
cout << ansY << endl;

    }
};

int main() {

multiplier c;
int a1;
int a2;
int x;
int y;
int x1;
int y1;
string  o1;
string o2;
cout<<"Please input co-efficient of x:"<<endl;
cin >> x;
cout<<"Please input co-efficient of y:"<<endl;
cin >> y;
cout<<"Please input equation co-efficient of x1:"<<endl;
cin >> x1;
cout<<"Please input co-efficient of y1:"<<endl;
cin >> y1;
cout<<"Please input answer 1"<<endl;
cin >> a1;
cout<<"Please input answer 2"<<endl;
cin >> a2;
//transfer

c.calculator(a1,a2,x,y,x1,y1);
}
