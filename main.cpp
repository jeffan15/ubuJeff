
#include <iostream>
#include "polygon.h"
#include "polygonArray.h"
using namespace std;


int main()
{
    polygon p(1,10);
    polygon q(2,20);
    polygon r(3,30);
    polygon s(4,40);
    polygon t(5,50);


    polygon arr[]={p,q,r,s,t};
    int size=sizeof(arr)/sizeof(arr[0]);

    polygonArray pa2(arr,size);
    polygonArray pa=pa2;


    pa.push_back(p);
    pa.printPolygon();
    cout<<"\n";

    pa.insert(3,t);
    pa.printPolygon();
    cout<<"\n";

    pa.remove(4);
    pa.printPolygon();




}
