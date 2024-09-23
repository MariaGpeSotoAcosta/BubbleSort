#include <iostream>
#include <vector>
using namespace std;
vector<int> bubbleSortVec(vector<int> vec){
 for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size()-(1+i);j++){
            if(vec[j]>vec[j+1]){
               int temp = vec[j];
               vec[j] = vec[j+1];
               vec[j+1]=temp;
            }
        }

    }

return vec;
}
int main()
{
    int a;
    vector<int> calificaciones;
    cout<<"-----CALIFICACIONES------"<<endl;
    cout<<"Introduzca 7 calificaciones"<<endl;
    for(int i = 0; i<7; i++){
    cout<<"Calificaciones faltantes= "<< 7-i<<endl;
        cin>>a;
    calificaciones.push_back(a);
    }
    calificaciones = bubbleSortVec(calificaciones);
    cout<<""<<endl;
    cout<<""<<endl;
    for(int i= 0;i<calificaciones.size();i++){
        cout<<"CALIFICACION "<<i+1<<"= "<<calificaciones[i]<<endl;

}
cout<<"CALIFICACION MAS ALTA "<<endl;
cout<<calificaciones[calificaciones.size()-1]<<endl;
cout<<"CALIFICACION MAS BAJA "<<endl;
cout<<calificaciones[0]<<endl;
}
