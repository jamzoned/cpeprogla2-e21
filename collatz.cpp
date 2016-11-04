#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream f("input.txt");
  	int x1,x2;
  	int x;
  	int ct;
  	
  while(f>>x1>>x2)
  {
  if((x1>0 && x1<1000000) && (x2>0 && x2< 1000000))
     {


   int max=0;
   int y=x1;
   int z=x2;
  		 if(x1>x2)
   		 {
   		  		y=x2;
   		  	    z=x1;
    }
 	 for(int i=y;i<=z;i++)
    {
    	 x=i;
     	ct=1;
     
while(x!=1)
{
    		 if(x%2==0)
   	   	  {
   			 x=x/2;
   			 ct++;
  		  }
 	else
     	  {
    		x=3*x+1;
     	 	ct++;
   		  }
     }
     if(max<ct)
     max=ct;
}
   cout <<x1<<' '<<x2<<' '<< max<<endl;
}
}
return(0);
}
