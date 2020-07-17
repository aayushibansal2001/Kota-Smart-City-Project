#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class housing                 //in Kota city//
{
 protected:
   char name[30];
   long int adhaarno;
   long int phone;
 public:
   char room_type[30];
   int days;
   void input()    //general housing details//
    {
      cout<<endl<<"Enter name,adhaar number and contact number ";
      cin>>name>>adhaarno>>phone;
      cout<<"Enter room type and number of days you want to stay ";
      cin>>room_type;
      cin>>days;
    }
  virtual void display(char *){};
};
class hostel:public housing  //derived class of housing//
{
  protected:
    float price; //total price//
  public:
    int input1(char hostel_name[30]);
    void display(char *);
};
int hostel::input1(char hostel_name[30])
{
       if(strcmpi(hostel_name,"rajniwas")==0)
       {
	     if(strcmpi(room_type,"twin")==0)
	     {
	      price=days * 250;
	      cout<<"Room is available.Your price according to twin sharing basis in hostel=Rs."<<price;
	      return 0;
	     }
         else if(strcmpi(room_type,"quad")==0)
	     {
	       price=days * 150;
	       cout<<"Room is available.Your price according to quad sharing basis in hostel=Rs."<<price;
	       return 0;
         }
         else
	     {
		   cout<<"!Room not available in Raj niwas hostel!";
	       return -1;
         }
      }
     else if(strcmp(hostel_name,"krishna")==0)
     {
       if(strcmpi(room_type,"twin")==0)
	   {
	     price=days * 220;
	     cout<<"Room is available.Your price according to twin sharing basis in hostel=Rs."<<price;
	     return 0;
	   }
       else if(strcmpi(room_type,"quad")==0)
	   {  
	     price=days * 180;
	     cout<<"Room is available.Your price according to quad sharing basis in hostel=Rs."<<price;
	     return 0;
	   }
       else
	   {
		 cout<<"!Room not available in Krishna hostel!";
	    return -1;
       }   
     }
     return 0;
}
void hostel:: display(char hostel_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"Hostel name:"<<hostel_name<<endl<<"Price:"<<price;
}
class pg:public housing   //derived class of housing//
{
  protected:
    float price1;    //price per month//
  public:
    int input2(char pg_name[30]);
    void display(char *);
};
int pg::input2(char pg_name[30])
{
       if(strcmpi(pg_name,"prateek")==0)
       {
	     if(strcmpi(room_type,"twin")==0)
	     {
	      price1=days * 500;
	      cout<<"Room is available.Your price according to twin sharing basis in PG=Rs."<<price1;
	      return 0;
	     }
          else if(strcmpi(room_type,"quad")==0)
	     {
	      price1=days * 400;
	      cout<<"Room is available.Your price according to quad sharing basis in PG=Rs."<<price1;
	      return 0;
	     }
          else
	     {
	      cout<<"!Room not available in Prateek PG!";
	      return -1;
	     }
       }
      else if(strcmpi(pg_name,"aastha")==0)
      {
	    if(strcmpi(room_type,"twin")==0)
	    {
	      price1=days * 450;
	      cout<<"Room is available.Your price according to twin sharing basis in PG=Rs."<<price1;
	      return 0;
	    }
        else if(strcmpi(room_type,"quad")==0)
	    {
	      price1=days * 500;
	      cout<<"Room is available.Your price according to quad sharing basis in PG=Rs."<<price1;
	      return 0;
	    }
        else
	      {
		   cout<<"!Room not available in Aastha PG!";
	       return -1;
	      }
      }
      return 0;
}
void pg::display(char pg_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"PG name:"<<pg_name<<endl<<"Price:"<<price1;
}
class hotel:public housing   //derived class of housing//
{
  protected:
    float price2;    //price per day//
  public:
    int input3(char hotel_name[30]);
    void display(char *);
};
int hotel::input3(char hotel_name[30])
{
      if(strcmpi(hotel_name,"international_grand")==0)
      {
       if(strcmpi(room_type,"single")==0)
	   {
	    price2=days * 3000;
	    cout<<"Room is available.Your price according to single stay basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else if(strcmpi(room_type,"twin")==0)
	  { 
	    price2=days * 2000;
	    cout<<"Room is available.Your price according to twin sharing basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else if(strcmpi(room_type,"quad")==0)
	  {
	    price2=days * 1500;
	    cout<<"Room is available.Your price according to quad sharing basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else
      {
	    cout<<"!Room not available in International grand hotel!";
	    return -1;
      }
    }
     else if(strcmpi(hotel_name,"country_inn")==0)
      {
       if(strcmpi(room_type,"single")==0)
	   {
	     price2=days * 5000;
	     cout<<"Your price according to single stay basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else if(strcmpi(room_type,"twin")==0)
	   { 
	     price2=days * 3000;
	     cout<<"Your price according to twin sharing basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else if(strcmpi(room_type,"quad")==0)
	   {
	     price2=days * 2000;
	     cout<<"Your price according to quad sharing basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else
	   {
	     cout<<"!Room not available in Country inn hotel!";
	     return -1;
	   }
      }
      return 0;
}
void hotel::display(char hotel_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"Hotel name:"<<hotel_name<<endl<<"Price:"<<price2;
}
class carent:public housing
{
	protected:
	int rent;
	char carname[30];
	char model[30];
	public:
		void input4(char carname[30]);
		void display(char*);
};
	void carent:: input4(char carname[30])
		{
			cout<<"Enter car model ";
			cin>>model;
			if(strcmpi(carname,"Maruti_suzuki")==0)
			{
			
		     if(strcmp(model,"RJ-20")==0)
		      rent=days*100;
		     else if(strcmp(model,"RJ-34")==0)
		      rent=days*120;
		     else if(strcmp(model,"RJ-40")==0)
		      rent=days*200;
		   }
		   if(strcmpi(carname,"Wagon_R")==0)
			{
			
		     if(strcmp(model,"RJ-22")==0)
		      rent=days*120;
		     else if(strcmp(model,"RJ-30")==0)
		      rent=days*180;
		     else if(strcmp(model,"RJ-10")==0)
		      rent=days*100;
		   }
	    }
		void carent::display(char carname[30])
		{
			cout<<"Car model:"<<model<<endl<<"Car name:"<<carname<<endl<<"Rent="<<rent<<endl;
		}
int main()
{
 hostel h;
 pg p;
 hotel htl;
 carent c;
 char types[30],hostel_name[30],pg_name[30],hotel_name[30];
 cout<<"                      WELCOME TO HOUSING IN KOTA!            ";
 cout<<endl<<"                        experience best stay                 ";
 cout<<endl<<"                       Available hostels:                              ";
 cout<<endl<<" * Raj Niwas(3 star)                                ";
 cout<<endl<<"   Twin sharing                         Rs.250 per day ";
 cout<<endl<<"   Quad sharing                         Rs.150 per day ";
 cout<<endl<<" * Krishna(2 star)                                  ";
 cout<<endl<<"   Twin sharing                         Rs.220 per day ";
 cout<<endl<<"   Quad sharing                         Rs.180 per day ";
 cout<<endl<<"                      Available PG's:                              ";
 cout<<endl<<" * Prateek PG(4 star)                                ";
 cout<<endl<<"   Twin sharing                         Rs.500 per day ";
 cout<<endl<<"   Quad sharing                         Rs.400 per day ";
 cout<<endl<<" * Aastha PG(3 star)                                  ";
 cout<<endl<<"   Twin sharing                         Rs.450 per day ";
 cout<<endl<<"   Quad sharing                         Rs.500 per day ";
 cout<<endl<<"                      Available Hotels:                              ";
 cout<<endl<<" * International Grand(4 star)                                ";
 cout<<endl<<"   Single occupancy                     Rs.3000 per day ";
 cout<<endl<<"   Twin sharing                         Rs.2000 per day ";
 cout<<endl<<"   Quad sharing                         Rs.1500 per day ";
 cout<<endl<<" *  Country Inn(4 star)                                  ";
 cout<<endl<<"   Single occupancy                     Rs.5000 per day ";
 cout<<endl<<"   Twin sharing                         Rs.3000 per day ";
 cout<<endl<<"   Quad sharing                         Rs.2000 per day ";
 cout<<endl;
 label:
 {
 cout<<"Enter the type of housing you want "; //hostel/pg/hotel//
 cin>>types;
 if(strcmpi(types,"hostel")==0)
 {
  h.input();
  cout<<"Enter the hostel name in which you want to stay ";
  cin>>hostel_name;
  int f1=h.input1(hostel_name);
  if(f1==-1)
  goto label;
  else
  h.display(hostel_name);
 }
 else if(strcmpi(types,"pg")==0)
 {
  p.input();
  cout<<"Enter the PG name in which you want to stay ";
  cin>>pg_name;
  int f2=p.input2(pg_name);
  if(f2==-1)
  goto label;
  else
  p.display(pg_name);
 }
 else if(strcmpi(types,"hotel")==0)
 {
  htl.input();
  cout<<"Enter the hotel name in which you want to stay ";
  cin>>hotel_name;
  int f=htl.input3(hotel_name);
  if(f==-1)
  goto label;
  else
  htl.display(hotel_name);
 }
}
cout<<endl<<"Do you want to rent a car for your stay? ";
char answer,carname1[30];
cin>>answer;
if(answer=='y')
 {  
    cout<<endl<<endl;
    cout<<"                                Welcome to car rental services!";
    cout<<endl<<endl<<"  Car Name                               Car Model                                   Rent per day";
    cout<<endl<<"* Maruti Suzuki                             RJ-20                                          100";
    cout<<endl<<"* Maruti Suzuki                             RJ-34                                          120";
    cout<<endl<<"* Maruti Suzuki                             RJ-40                                          200";
    cout<<endl<<"* Wagon R                                   RJ-22                                          120";
    cout<<endl<<"* Wagon R                                   RJ-30                                          180";
    cout<<endl<<"* Wagon R                                   RJ-10                                          100";
    cout<<endl<<" Enter car name ";
    cin>>carname1;
    cout<<endl;
 	c.input4(carname1);
 	c.display(carname1);
 }
 return 0;
}


