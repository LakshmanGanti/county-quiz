#include<bits/stdc++.h>
#include<dos.h>
#include<windows.h>
using namespace std;

struct stack {
   int s[5];
   int top;
} st;

struct stack1 {
   int s1[5];
   int top1;
} st1;

void push(int item,int top) {

   st.s[top]=item;
}
void push1(int item1,int top1) {

   st1.s1[top1]=item1;
}

int pop(int top) {
    
   int item;
   item=st.s[top];
   return (item);
}

int pop1(int top1) {
    
   int item1;
   item1=st1.s1[top1];
   return (item1);
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main(){
    
    system("cls");
    cout<< "\n\t\t\t--- WELCOME TO COUNTRY QUIZ ---";
    cout<<endl<<endl;
    char z;
    cout<<"->  This is a 2 player quiz game.\n->  Each person is given 5 questions to answer,\n->  correct answer gives 10 marks,\n->  wrong gives -4, \n->  passing fetches 0\n->  and correct with hint gives 7 marks.\n->  Person with most marks at end, wins. "<<endl<<endl;
    cout<<"Press any letter to continue : ";
    cin>>z;
    system("cls");
    int top = -1;
    int top1 = -1;
    char b[][30]=
  {
    "INDIA",
    "MALAYSIA",
    "JAPAN",
    "THAILAND",
    "BHUTAN",
    "INDONESIA",
    "AUSTRALIA",
    "SRI LANKA",
    "RUSSIA",
    "CHINA",
    "UKRAINE",
    "PAKISTAN",
    "EGYPT",
    "SOUTH AFRICA",
    "CANADA",
    "ENGLAND",
    "ICELAND",
    "GERMANY",
    "JAMAICA",
    "BRAZIL",
    "UNITED ARAB EMIRATES",
    "NORWAY",
    "NEW ZEALAND",
    "BANGLADESH",
    "ARGENTINA",
    "PORTUGAL",
    "VATICAN CITY",
    "MALDIVES"
  };
   char s6[][100]=
  {

    "It is known to be worlds largest Democracy",
    "Capital of this country is Kuala Lampur",
    "Known as the Land of Rising Sun",
    "This country is home to White Elephants",
    "It is known as Land of Thunder Dragons",
    "The world's largest flower, Rafflesia Arnoldi, grows only in this country",
    "It is home to Kangaroos",
    "Has south borders with India, Home to Ravana",
    "Largest country by land",
    "World largest Population resides in this country",
    "Largest country by area in Europe (excluding Russia)",
    "Divided from India during Independence",
    "Home to Pyramids",
    "Leading producer of Platinum in the world",
    "Most Educated country in the World",
    "Only country not ruled by any other country in history",
    "Mosquito free country, known as oldest democracies",
    "Hitler was from this country",
    "Worlds fastest Man is from this country",
    "Largest Producer of coffee",
    "World tallest building is in this Country",
    "Known as Land of Midnight Sun",
    "Famous for KIWI",
    "Got sepearted from India in 1971",
    "Name comes from the Latin word of silver",
    "Home to famous soccer player - Christiano Ronaldo",
    "Smallest country of the world",
    "Island nation in South of India, Capital is Male"

  };
  string s,s1;
  cout<<"Enter the name of Player 1 : ";
  getline(cin>>ws,s);
  cout<<"Enter the name of Player 2 : ";
  getline(cin>>ws,s1);
  system("cls");
  cout<<s<<" plays First"<<endl;

  //Loop for first player
  for(int i=0;i<5;i++)
    {
        system("cls");
        srand(time(NULL));
        int x = rand()%28;
        string s2 = s6[x];
        string s3 = b[x];
        string s4;
        int flag = 0;
        cout<<"Your "<<i+1<<" Question is "<<endl;
        cout<<s2<<endl;
        cout<<"Press p to pass(0 score)"<<endl;
        cout<<"Press h for hint( Deducts 3 points )"<<endl;
        getline(cin>>ws,s4);
        for(int i=0;i<s4.size();i++)
        {
            s4[i]=toupper(s4[i]); // toupper converts small case letters to captial letters

        }
         if(s4=="H")
        {
            flag=1;
            cout<<"The name starts from : "<<s3[0]<<endl;
            cout<<"Enter your guess now"<<endl;
            getline(cin>>ws,s4);
            for(int i=0;i<s4.size();i++)
            {
               s4[i]=toupper(s4[i]);

            }


        }
        if(s4=="P")
        {

            top++;
            push(0,top);

            continue;

        }
        if(s4==b[x]&&flag==0)
        {
            cout<<"Your answer is correct!!"<<endl;
            cout<<"You score 10 from this one!"<<endl;
            top++;
            push(10,top);
            delay(3000);
            continue;
        }
        if(s4==b[x]&&flag==1)
        {
            cout<<"Your answer is correct, but you used a hint!!"<<endl;
            cout<<"You score 7 from this one!"<<endl;
            top++;
            push(7,top);
        }
        else 
        {
            cout<<"Sorry, your answer is wrong !!"<<endl;
            cout<<"You scored a -4"<<endl;
            top++;

            push(-4,top);
        }
        
        delay(3000);

    }
    system("cls");
    cout<<s1<<" plays Now"<<endl;

    // Loop for second player 
    for(int i=0;i<5;i++)
    {
         system("cls");
        int num = 10;
        srand(time(NULL));
        int x = rand()%28;
        string s2 = s6[x];
        string s3 = b[x];
        string s4;
        int flag = 0;
        cout<<"Your "<<i+1<<" Question is "<<endl;
        cout<<s2<<endl;
        cout<<"Press p to pass(0 score)"<<endl;
        cout<<"Press h for hint( Deducts 3 points )"<<endl;
        getline(cin>>ws,s4);
        for(int i=0;i<s4.size();i++)
        {
            s4[i]=toupper(s4[i]);

        }
         if(s4=="H")
        {
            flag=1;
            cout<<"The name starts from : "<<s3[0]<<endl;
            cout<<"Enter your guess now"<<endl;
            getline(cin>>ws,s4);
            for(int i=0;i<s4.size();i++)
            {
               s4[i]=toupper(s4[i]);

            }

        }
        if(s4=="P")
        {   top1++;
            push1(0,top1);
            continue;

        }
        if(s4==b[x]&&flag==0)
        {
           
            cout<<"Your answer is correct!!"<<endl;
            cout<<"You score 10 from this one!"<<endl;            
            top1++;
            push1(10,top1);  
            delay(3000);         
            continue;

        }
        if(s4==b[x]&&flag==1)
        {
            
            cout<<"Your answer is correct, but you used a hint!!"<<endl;
            cout<<"You score 7 from this one!"<<endl;
            top1++;

            push1(7,top1);
        }
        else {

            cout<<"Sorry, your answer is wrong !!"<<endl;
            cout<<"You scored a -4"<<endl;
            top1++;
            push1(-4,top1);

        }

        delay(3000);

    }
    system("cls");

    int sum=0,sum1=0;
    for(int j=0;j<5;j++)
    {    

       sum = sum + pop(top);
       top--;
       sum1 = sum1 + pop1(top1);
       top1--;

    }
    
    if(sum>sum1)
    { 
       cout<<"The scores are : "<<endl;
       cout<<s<<" scores ";
       cout<<sum<<endl;
       cout<<s1<<" scores ";
       cout<<sum1<<endl<<endl;
   
       cout<<s<<"WINS"<<endl;
       

    }
    else if(sum<sum1)
    {
       cout<<"The scores are : "<<endl;
       cout<<s<<" scores ";
       cout<<sum<<endl;
       cout<<s1<<" scores ";
       cout<<sum1<<endl<<endl;
       cout<<s1<<" WINS"<<endl;
   

    }
    else
    {
        cout<<"ITS A DRAW!!"<<endl;
        cout<<"Both score : "<<sum<<endl;
    }

   st.s[5]={0};
   st1.s1[5]={0};

    return 0;
}