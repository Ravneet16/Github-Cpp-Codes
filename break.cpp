#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// wap to print all numbers from 1 to 100 except the ones divisible by 3 
/*class oreo
{
	private:
		int i;
		public:
			void show()
			{
				//cout<<"enter a number:";
				//cin>>i;
				for(i=1;i<=100;i++)
				{
					if(i%3==0)
					{ 
					  continue;
					}
					else
					{
					
                    cout<<"the numbers are:"<<i<<endl;
					}
			    } 
			}
	 
 };
 
 int main()
 {
 	oreo o1;
 	o1.show();
 //	getch();
 	return 0;
 }*/
  
// neha wala program 
/*class neha 
{
 private:
    int i;
    int pocketmoney=5000;
 public:
          void show()
		  {
		  	for(i=1;i<=30;i++)
		  	{
		  	  if(i%2==0)
			  {
				continue;	
			  }
			  if(pocketmoney==0)
			  {
			  	 break;
			  }
			   cout<<"go out today!!"<<i<<endl;
			   pocketmoney=pocketmoney-300;		
			  }
		   } 
	
  };
 
 int main()
 {
  neha n1;
  n1.show();
 // getch();
  return 0;	
  }*/ 
  
  
  //prime numbers between a and b 
  /*class prime 
  {
  	private:
  		int i,a,b,n;
  	public:
	     void show()
		 {
		 	cout<<"enter the numbers a and b:";
		 	cin>>a;
		 	cin>>b;
		 	for(n=a;n<=b;n++)
		 	{
		 		for(i=2;i<=n;i++)
		 		{
		 			if(n%i==0)
		 			{ 
		 			  break;
					 }
			    }
				if(i==n)
				{
					cout<<"number is prime"<<n<<endl;
				}	 
				
		   }
		}	
    };
    
    int main()
    {
     prime p1;
	 p1.show();
	 return 0;	
	}*/
	
//	switch statement
 // to print 5 different hi messsages using switch <by a robot having 5 different buttons on it>
  class robo
  {
  	private:
  		 char button;
  	public:
	   void show()
	   {
	   	cout<<"press the button:";
	   	cin>>button;
	   	switch(button)
	   	{
	   	 case 'a':
	   	 	cout<<"hello!"<<endl;
	   	 	    break;
	   	 case 'b':
			cout<<"hola!"<<endl;
			    break;
		 case 'c':
		    cout<<"namaste"<<endl;
		        break;
		 case 'd':
		      cout<<"sat shri akal"<<endl;
		        break;
		 case 'e':
		        cout<<"caio!"<<endl;
				break;				
		default :
		    cout<<"still learning!";
			   break;		
		}
	}
  };
  int main()
  {
  	robo r1;
  	r1.show();
  	return 0;
  }

