#include <iostream> 


using namespace std;
int main()
{ 
    int m[4][4];
    
    int prodotto=1;
    cout<<"inserisci una matrice 4x4 "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
                 m[i][j] = rand()%15;

          
           
            
              
            
        }}

        cout<<"la matrice è";
cout<<endl;
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
cout<<m[i][j]<<"";
}
cout<<endl;
}

for(int i=0;i<4;i++)
     {
        for(int j=0;j<4;j++)
        {
            if(i==j){
                prodotto=m[i][j]*prodotto;

            } 

        
        
        }}
        cout<<"IL PRODOTTO DEI VALORI DIAGONALI è PARI A" <<endl;
         cout<<prodotto;


        
        
        }