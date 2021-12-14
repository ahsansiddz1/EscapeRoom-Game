#include<iostream>
#include<conio.h> 
using namespace std;
int main()
{
	 
  	start:
	int x,y,plx1=5,ply1=3,plx2=6,ply2=15;
	char pos;
	bool havekey=false;
  int gotkey=0;
  
  char playagain;


 do
  {
  	
  
       		switch(pos)
				{
					case 'w' : 
					system("cls");
					plx1--;
					break;
					
					case 'a' : 
					system("cls");
					ply1--;
					break;
					
					case 's' : 
					system("cls");
					plx1++;
					break;
					
					case 'd' : 
					system("cls");
					ply1++;
		          break;
		          
		          case 72:
					system("cls");
						if (plx2==11  && ply2==16) 
					{
						plx2==11;
					}
					else if(plx2==1)
					{
						plx2=1;
					}
					else
				plx2--;
					break;
					
					case 75 : 
					system("cls");
				 
					if (plx2==10  && ply2==17)
					{
						ply2=17;
					}
						else if(ply2==1)
					{
						ply2=1;
					}
				
					else
				 ply2--;
		        
					break;
					
					case 80 : 
					system("cls");
						
						if (plx2==9  && ply2==16)
					{
						plx2=9;
					}
					else if(plx2==18)
					{
						plx2=18;
					}
					else
					plx2++;
			     
					break;
					
					case 77 : 
					system("cls");
						if (plx2==10  && ply2==15)
					{
						ply2=15;
					}
						else if(ply2==18)
					{
						ply2=18;
					}
					else
					ply2++;
			    	
					break;
				}
	for( x=0; x<20; x++ )
	{
		for(y=0; y<20; y++)
		{
		
	  if(plx1==16 && ply1==3)
	  {
	  	havekey=true;
	  
	  }
			  
		if(x==0 || x==19 || (x>0 && y==0) || (x>0 && y==19) || (x>2 && x<17 && y==9 ) )
			{
				cout<<"\xB1";
			}            
			
				else if(x==plx1 && y==ply1)
			  {
			  	cout<<"\x02";
			  }            
				else if(x==plx2 && y==ply2)
			  {
			  	cout<<"\x01";
			  }            
			   
			   else if(x==16 && y==3 && havekey==false)
			   {
			   	  cout<<"\x0C" ;
			   }              
			   else if( x==10  && y==16 )
			   {
			   	  cout<<"\xb2";
			   }          
			else
			cout<<" " ;
           
		}//inner for loop closed
		cout<<endl;
	} //outer for loop closed
 if(plx1==16 && ply1==3 && gotkey==0)
 {
 	cout<<"You got the key !!";
 	gotkey=1;
 }
  if(plx1==10 && ply1==16 && havekey==false)
 {
 	cout<<"Go Back and Bring the key";
 	gotkey=2;
 }
 else if (plx1==10 && ply1==16 && havekey==true)
   {
   	  system("cls");
   	  cout<<"You Won the Game.";
		 cout<<"\n Do u want to Continue ? ";
		 cout<<"\n Press Y for Yes and N for No";
   	 cin>>playagain;
   	  if(playagain=='n' || playagain=='N'  )
   	  break;
   	  else 
   	  goto start;
   }
  	if(plx1==0 || plx1==19 || (plx1>0 && ply1==0) || (plx1>0 && ply1==19) || (plx1>2 && plx1<17 && ply1==9 )
	    || ( (plx1 == plx2)&& (ply1==ply2) ) )                               
	   {                      
   	  system("cls");
   	  cout<<"Game Over";
   	 	 cout<<"\n Do u want to Continue ? ";
		 cout<<"\n Press Y for Yes and N for No >"; 
   	 cin>>playagain;
   	 if(playagain=='n' || playagain=='N'  )
   	 {
		
   	 break;
   }
   	  else {
		
		plx1=5,ply1=1;
		havekey=false;
		gotkey=0;
		  goto start;
		 }
		 

   }
  
  pos=getch();
} while(playagain!='n' ||  playagain!='N');
	return 0;
}