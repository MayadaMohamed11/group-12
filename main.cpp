#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char character;
    cout<<"Enter your character M or F : ";
    cin>>character;
    double weight;
    cout<<"Enter your weight in pounds : ";
    cin>>weight;
     if(weight<0){
        cout<<"Not vailed "<<endl;
        return 0;
    }
    double height;
    cout<<"Enter your height in inches : ";
    cin>>height;
     if(height<0){
        cout<<"Not vailed "<<endl;
        return 0;
    }
    int age;
    cout<<"Enter your age in years : ";
    cin>>age;
     if(age<0){
        cout<<"Not vailed "<<endl;
        return 0;
    }
    const int chocolate=230;
    int BMR= 655 + (4.3 * weight ) + (4.7 * height ) - (4.7 * age );
    int BMR1= 66 + (6.3 * weight) + (12.9 * height) - (6.8 *age );
    if(character=='F'||character=='f'){
             cout<<"the number of chocolate bars : "<<int(BMR/230)+1<<endl;
    }
    else if (character=='M'||character=='m'){
         cout<<"the number of chocolate bars : "<<int(BMR1/230)+1<<endl;
    }
    else
        cout<<"Not vailed "<<endl;

    return 0;
}
