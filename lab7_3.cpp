//status = "ONE-NIGHT-STAND"
#include<iostream>
#include<string>

using namespace std;
int main(){
    int age,height,asset;

    cout << "How old are you?: ";
    cin >> age;
    if (age < 20){
        cout << "How tall are you?: ";
        cin >> height;
        if (height < 160)
            cout << "status = unfriend ";
            else if (height < 175 )
                 cout << "status = friend ";
                 else 
                 cout << "How much asset do you have?: ";
                 cin >> asset;
                 
                 
                 if(asset > 69000000)
                   cout << "status = Married ";
                   else 
                   cout << "status = ONE-NIGHT STAND ";
                 
    }
      else if( age < 30){
          cout << "How much asset do you have?: ";
          cin >> asset;
          if (asset > 10000000)
          cout << "status = BEST FRIEND ";
          else
          cout << "status = unfriend ";
      }else
      cout << "status = unfriend ";

      return 0;
}
