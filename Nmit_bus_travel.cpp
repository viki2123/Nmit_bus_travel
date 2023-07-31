
#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
static int p = 0;
class a
{
  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
public:
 void install();
// void installt();
  void allotments();
  void empty();
  void shows();
  void avails();
  void positions(int i);
  void allotment_t();
//  void emptyt();
  void showt();
  void availt();
  void positiont(int i);
void arrangement_t()
{
int t=0;
for(int i=0;i<8;i++)
{
    cout<<"\n";
for(int j=0;j<4;j++)
{
 t++;
 cout.width(5);
          cout.fill(' ');
          cout<<t<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<"____";
}
}
}
void arrangements()
{
int q=0;
for(int i=0;i<2;i++)
{
    cout<<"\n";
for(int j=0;j<4;j++)
{
 q++;
          cout.width(5);
          cout.fill(' ');
          cout<<q<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<"teachers";
}
}
  for(int l=0; l<6;l++)
  {
      cout<<"\n";
    for(int k=0;k<4;k++)
    {
     q++;
          cout.width(5);
          cout.fill(' ');
          cout<<q<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<"______";
    }
  }
}
}
bus[10];

void vline(char ch)
{
  for (int i=80;i>0;i--)
  cout<<ch;
}

void a::allotment_t()
{
  int seat;
  char number[5];
  tops:
  cout<<"Bus no: ";
  cin>>number;
  int n;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busn, number)==0)
    break;
  }
  while(n<=p)
  {
    cout<<"\nSeat Number: ";
    cin>>seat;
    if(seat>32)
    {
      cout<<"\nThere are only 32 seats available in this bus.";
    }
    else
    {
    if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "teachers")==0 || strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
      {
        cout<<"Enter passanger's name: ";
        cin>>bus[n].seat[seat/4][(seat%4)-1];
        break;
      }
    else
      cout<<"The seat no. is already reserved.\n";
      }
      }
    if(n>p)
    {
      cout<<"Enter correct bus no.\n";
      goto tops;
    }
  }

void a::empty()
{
  for(int i=0; i<2;i++)
  {
    for(int j=0;j<4;j++)
    {
      strcpy(bus[p].seat[i][j], "teachers");
    }
  }
  for(int i=2; i<8;i++)
  {
    for(int j=0;j<4;j++)
    {
      strcpy(bus[p].seat[i][j], "Empty");
    }
  }
}

void a::showt()
{
  int n;
  char number[5];
  cout<<"Enter bus no: ";
  cin>>number;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busn, number)==0)
    break;
  }
while(n<=p)
{
  vline('*');
  cout<<"Bus no: \t"<<bus[n].busn
  <<"\nDriver: \t"<<bus[n].driver
  <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<
  bus[n].to<<"\n";
  vline('*');
  bus[0].positiont(n);
  int a=0;
  for (int i=0; i<8; i++)
  {
    for(int j=0;j<4;j++)
    {
      a++;
      if(strcmp(bus[n].seat[i][j],"Empty")!=0 && strcmp(bus[n].seat[i][j],"teachers"))
      cout<<"\nThe seat no "<<a<<" is reserved for "<<bus[n].seat[i][j]<<".";
    }
  }
  break;
  }
  if(n>p)
    cout<<"Enter correct bus no: ";
}

void a::positiont(int l)
{
  int s=0,p=0;
  for (int i =0; i<8;i++)
  {
    cout<<"\n";
    for (int j = 0;j<4; j++)
    {
      s++;
      if(strcmp(bus[l].seat[i][j], "Empty")==0)
        {
          cout.width(5);
          cout.fill(' ');
          cout<<s<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<bus[l].seat[i][j];
          p++;
        }
        else if(strcmp(bus[l].seat[i][j], "teachers")==0)
        {
        cout.width(5);
        cout.fill(' ');
        cout<<s<<".";
        cout.width(10);
        cout.fill(' ');
        cout<<bus[l].seat[i][j];
        p++;
        }
        else
        {
        cout.width(5);
        cout.fill(' ');
        cout<<s<<".";
        cout.width(10);
        cout.fill(' ');
        cout<<bus[l].seat[i][j];
        }
      }
    }
  cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;
  }
void a::availt()
{
  for(int n=0;n<p;n++)
  {
   vline('*');
    cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver
    <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
    <<bus[n].to<<"\n";
    vline('*');
    vline('_');
  }
}

void a::install()
{
  cout<<"Enter bus no: ";
  cin>>bus[p].busn;
  cout<<"\nEnter Driver's name: ";
  cin>>bus[p].driver;
  cout<<"\nFrom: \t\t\t";
  cin>>bus[p].from;
  cout<<"\nTo: \t\t\t";
  cin>>bus[p].to;
  bus[p].empty();
 p++;
}

void a::allotments()
{
  int seat;
  char number[5];
  top:
  cout<<"Bus no: ";
  cin>>number;
  int n;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busn, number)==0)
    break;
  }
  while(n<=p)
  {
    cout<<"\nSeat Number: ";
    cin>>seat;
    if(seat>32)
    {
      cout<<"\nThere are only 32 seats available in this bus.";
    }
    else
    {
    if (strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
      {
        cout<<"Enter passanger's name:";
        cin>>bus[n].seat[seat/4][(seat%4)-1];
        break;
      }
    else
      cout<<"The seat no. is already reserved.\n";
      }
      }
    if(n>p)
    {
      cout<<"Enter correct bus no.\n";
      goto top;
    }
  }

void a::shows()
{
  int n;
  char number[5];
  cout<<"Enter bus no: ";
  cin>>number;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busn, number)==0)
    break;
  }
while(n<=p)
{
  vline('*');
  cout<<"Bus no: \t"<<bus[n].busn
  <<"\nDriver: \t"<<bus[n].driver
  <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<
  bus[n].to<<"\n";
  vline('*');
  cout<<"\n";
  bus[0].positions(n);
  int a=8;
  for (int i=2; i<8; i++)
  {
    for(int j=0;j<4;j++)
    {
      a++;
      if(strcmp(bus[n].seat[i][j],"Empty")!=0)
      cout<<"\nThe seat no "<<(a)<<" is reserved for "<<bus[n].seat[i][j]<<".";
    }
  }
  break;
  }
  if(n>p)
    cout<<"Enter correct bus no: ";
}

void a::positions(int l)
{
  int s=0,p=0;
    for(int i=0; i<2;i++)
  {
      cout<<"\n";
    for(int j=0;j<4;j++)
    {
     s++;
          cout.width(5);
          cout.fill(' ');
          cout<<s<<".";
          cout.width(10);
          cout.fill(' ');
        cout<<"reserved";
    }
  }
  for (int i =2; i<8;i++)
  {
    cout<<"\n";
    for (int j = 0;j<4; j++)
    {
      s++;
      if(strcmp(bus[l].seat[i][j], "Empty")==0)
        {
          cout.width(5);
          cout.fill(' ');
          cout<<s<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<bus[l].seat[i][j];
          p++;
        }
        else
        {
        cout.width(5);
        cout.fill(' ');
        cout<<s<<".";
        cout.width(10);
        cout.fill(' ');
        cout<<bus[l].seat[i][j];
        }
      }
    }
  cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;
  }
  
void a::avails()
{
  for(int n=0;n<p;n++)
  {
   vline('*');
    cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver
    <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
    <<bus[n].to<<"\n";
    vline('*');
    vline('_');
  }
}

int main()
{
  int w;
  char e;
  for(int v=0;v<2;v++)
  {
  bus[p].install();
  }
  cout<<"\n";
while(1)
{
  cout<<"\n";
  cout<<"A.TEACHERS\n";
  cout<<"B.STUDENTS\n";
  cout<<"\n";
  cout<<"\n\t\t\tEnter your choice:-> ";
  cin>>e;
  cout<<"Seats 1 to 8 are specially arranged for teachers";
  switch(e)
  {
  case 'A': {
      while(1)
      {
  cout<<"\n\n\n\n\n";
  //cout<<"\t\t\t1.Install\n\t\t\t"
    cout<<"\t\t\t1.Reservation\n\t\t\t"
        <<"2.Show\n\t\t\t"
        <<"3.Buses Available. \n\t\t\t"
        <<"4.Exit";
  bus[0].arrangement_t();
  cout<<"\n\t\t\tEnter your choice for TEACHER:-> ";
  cin>>w;
  switch(w)
    {
    case 1:  bus[p].allotment_t();
      break;
    case 2:  bus[0].showt();
      break;
    case 3:  bus[0].availt();
      break;
    case 4:  exit(0);
   
   }
   }
   }
   break;
   
    case 'B': {
    bus[0].arrangements();
     while(1)
     {
     cout<<"\n\n\n\n\n";
    cout<<"\t\t\t1.Reservation\n\t\t\t"
        <<"2.Show\n\t\t\t"
        <<"3.Buses Available. \n\t\t\t"
        <<"4.Exit";
     cout<<"\n\t\t\tEnter your choice for STUDENT:-> ";
     cin>>w;
     switch(w)
    {
    case 1:  bus[p].allotments();
      break;
    case 2:  bus[0].shows();
      break;
    case 3:  bus[0].avails();
      break;
    case 4:  exit(0);
}
}
}
break;
}
}
}

