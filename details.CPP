struct customer                    //structure for customer
  {
     char c_name[50];
     char c_address[50];
     int jew_code;
     int c_id;
     int c_amt;
 }c1;
struct employee                  //structure for employee
  {
     char e_name[50];
     char e_address[50];
     int e_id;
     float e_salary;
  }e1; 
struct purchase                    //structure for purchase
  {
    int s_code;
    char s_name[50];
    char s_address[50];
    float s_amt;
  }p1;
void enter_c_det()               //function to add customer details  
 {
    fstream f;
    f.open("qdata.dat",ios::app|ios::binary);
    if(!f)
     {
        cout<<"unable to open"<<endl;
        getch();
        return;
    }
   cout<<"THE CUSTOMER DETAILS"<<endl;
   cout<<"Enter customer name"<<endl;
   gets(c1.c_name);
   cout<<"Enter customer address"<<endl;
   gets(c1.c_address);
   cout<<"Enter jewellery code"<<endl;
   cin>>c1.jew_code;
   cout<<"Enter customer id"<<endl;
   cin>>c1.c_id;
   cout<<"Enter amount paid by customer"<<endl;
   cin>>c1.c_amt;
   f.write((char*) & c1,sizeof(customer));
  f.close();
 }//add 
void enter_emp_det()          //function to add employee details  
  {
   fstream g;
   g.open("rdata.dat",ios::app|ios::binary);
   if(!g)
     {
       cout<<"unable to open"<<endl;
     }
   cout<<"THE EMPLOYEE DETAILS"<<endl;
   cout<<"Enter employee name"<<endl;
   gets(e1.e_name);
   cout<<"Enter employee address"<<endl;
   gets(e1.e_address);
   cout<<"Enter salary of employee"<<endl;
   cin>>e1.e_salary;
   cout<<"Enter employee id"<<endl;
   cin>>e1.e_id;
   g.write((char*) & e1,sizeof(employee));
   g.close();
 }//add
void show_c_det()          //function to show customer details  
 {
   fstream y;
   y.open("qdata.dat",ios::in||ios::binary);
   if(!y)
    {
       cout<<"unable to open"<<endl;
    }
   y.read((char*) & c1,sizeof(customer));
   cout<<"THE CUSTOMER DETAILS"<<endl;
   cout<<"Customer name is"<<endl;
   cout<<c1.c_name<<endl;
   cout<<"Customer address is"<<endl;
   cout<<c1.c_address<<endl;
   cout<<"Jewellery code is"<<endl;
   cout<<c1.jew_code<<endl;
   cout<<"Customer id is"<<endl;
   cout<<c1.c_id<<endl;
   cout<<"The amount paid by customer is"<<endl;
   cout<<c1.c_amt<<endl;
   y.close();
 }//display
void show_emp_det()     //function to show employee details  
{
   fstream u;
   u.open("rdata.dat",ios::in|ios::binary);
   if(!u)
      {
         cout<<"unable to open"<<endl;
      }
  while( u.read((char*) & e1,sizeof(employee)))
 {
   cout<<"THE EMPLOYEE DETAILS"<<endl;
  cout<<"Employee name is"<<endl;
   cout<<e1.e_name<<endl;
   cout<<"Employee address is"<<endl;
   cout<<e1.e_address<<endl;
   cout<<"Employee salary is"<<endl;
   cout<<e1.e_salary<<endl;
   cout<<"Employee id is"<<endl;
   cout<<e1.e_id<<endl;
   u.close();
 }
getch();
}//display
void ent_purchase()   //function to add purchase details  
 {
   fstream o;
   o.open("pdata.dat",ios::app|ios::binary);
  if(!o)
   {
      cout<<"unable to open"<<endl;
   }
  cout<<"THE PURCHASE DETAILS"<<endl;
  cout<<"Enter the name of supplier"<<endl;
  gets(p1.s_name);
  cout<<"Enter the jewellery code"<<endl;
  cin>>p1.s_code;
  cout<<"Enter address of supplier"<<endl;
  gets(p1.s_address);
  cout<<"Enter amount given to supplier"<<endl;
  cin>>p1.s_amt;
  o.write((char*) & p1,sizeof(purchase));
  o.close();
}//add
void show_purchase()     //function to show purchase details  
 {
   fstream p;
   p.open("pdata.dat",ios::in|ios::binary);
   if(!p)
   {
      cout<<"unable to open"<<endl;
   }
 while(p.read((char*) & p1,sizeof(purchase)))
 {
   cout<<"THE PURCHASE DETAILS"<<endl;
   cout<<"The name of supplier is ";
   cout<<p1.s_name<<endl;
   cout<<"The jewellery code is";
   cout<<p1.s_code<<endl;
   cout<<"The address of supplier is";
   cout<<p1.s_address<<endl;
   cout<<"The amount given to supplier is";
   cout<<p1.s_amt<<endl;
   p.close();
 }//while
}//display


