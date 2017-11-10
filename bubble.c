
#include<iostream>
using namespace std;




void Bubble_sort( int t[],int l)
{

	int i,j,temp;
	
    for(i = 0;i < l-1;i++)
	{
	
	   
	    cout<<"pass"<< i<< endl;
		for(j = 0;j < l;j++)
		{
		
		    if(t[j] > t[j+1])
			{
				
				temp = t[j];
				t[j] = t[j+1];
				t[j+1] = temp;
				
			}
			
			cout<<"\t Voici les etapes"<< t[j]<< endl;
			
		}
	}
	
}



void sort_array(int taille)
{

   int i,chiffre;
   int tableau[taille];
   
   for(i = 0; i < taille; i++)
   {
   	    cout<<"\nVeuillez inserer le nombre:";
	    cin>> chiffre;
	    tableau[i] = chiffre;
   }
   
 
  Bubble_sort(tableau,taille);
  
}



int main()
{
    int m;
    cout<<"Veuillez preciser la taille du tableau:"<<endl;
	cin>> m;
	
	sort_array(m);
	
	return 0;
}
