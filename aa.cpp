#include<iostream>
using namespace std;
class ob
{
   float ans, a,b;
   char ch,yn;
   public:
     void accept();
     void calc();
};
  void ob :: accept()
 {
    cout<<"enter oderator (+,-,*,/,$(square) :";
    cin>>ch;
    if(Ch!='$')
    cout<<enter first namr";
    cin>>a
    cout<<enter second name";
    cin>>b
}
void ob :: calc()
{
       switch(ch)
       {
            case '+'  :
                      ans = a+b;
                      break;
            case '-'  :
                      ans = a-b;
                      break;
            case '*'  :
                      ans = a*b;
                      break;
            case '/'  :
                      lf (b==0)
                      cout<<"not divisible by 0";
                      else
                      ans=a/b;
                      break;
            case '$'  :
                      ans = a*a
                      break;
            default   :
                      cout<<"wrong choice";
        }
                      cout<<"\nAnswer="ans;
}
    int main ()
     {
       char yn;
       ob o;
       do
       {
            o.accept();
            o.calc();
            cout<<"\nDo you want to do another ?? (y/n):";
            cin>>yn;
       }while(yn=='Y'|| yn=='Y');
       return 0;
     }
              
