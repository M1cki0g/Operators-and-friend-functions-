#include <iostream>

using namespace std;

class vecteur3D{
float x,y,z;

public:
    vecteur3D(float c1 =0.0 , float c2 =0.0 , float c3 =0.0){
    x=c1;
    y=c2;
    z=c3;
    }

    vecteur3D somme(const vecteur3D& b)const{
    return vecteur3D(x+b.x , y+b.y , z+b.z);
    }


    friend float operator*(const vecteur3D& a);
    friend bool operator==(const vecteur3D& a , const vecteur3D& b);

    float getx()const{return x;}
    float gety()const{return y;}
    float getz()const{return z;}

void afficher(){
cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
cout<<"z= "<<z<<endl;
}
};


vecteur3D operator+(const vecteur3D& a , const vecteur3D& b){
return a.somme(b);
}

float operator*(const vecteur3D& x , const vecteur3D& a){
return ((x.getx()*a.getx())+(x.getx()*a.gety())+(x.getx()*a.getz()));
}

bool operator==(const vecteur3D& a ,const vecteur3D& b){
if ( (a.getx() == b.getx()) && (a.gety() == b.gety()) && (a.getz() == b.getz()) )
    return true;
else
    return false;
}



int main()
{
vecteur3D v1(1,2,3);
vecteur3D v2(4,5,6);
vecteur3D v3 = v1+v2;
v3.afficher();
float r = v1*v2;
cout<<"r= "<<r<<endl;
if (v1==v2)
cout<<"egaux "<<endl;
else
cout<<"different "<<endl;




return 0;
}
