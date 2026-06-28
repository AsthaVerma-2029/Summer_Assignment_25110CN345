// WRITE A PROGRAM TO CREATE QUIZ APPLICATION

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    while(true){
        int count=0;
        cout<<"......................................WELCOME TO QUIZ APPLICATION............................................\n\n";
        string ques_1;
        cout<<" QUESTION 1:   What does HTTPS stands for : \n\n"
                " A. HYPER Text Transfer Protocol \n"
                " B. hyperlink Text Transfer Protocol \n"
                " c. High Trsnsfer technology Protocol \n"
                " D. Hyper Text Tech Protocol  \n ";
                cin>>ques_1;
                cout<<"......................................................................................................";
                if(ques_1=="A" || ques_1=="a"){
                    count++;
                }
        string ques_2;
        cout<<" \nQUESTION 2:   which is the longest river on earth : \n"
                "A. Ganga \n"
                "B. Nile \n"
                "C. Yangtze \n"
                "D. Amazon \n ";
                cin>>ques_2;
                cout<<"......................................................................................................";
                if(ques_2=="B" || ques_2=="b"){
                    count++;
                }
        string ques_3;
        cout<<" \nQUESTION 3:   which  planet in solar system rotates clockwise : \n"
                "A. mercury \n"
                "B. saturn \n"
                "C. venus \n"
                "D. earth\n ";
                cin>>ques_3;
                cout<<"......................................................................................................";
                if(ques_3=="c" || ques_3=="C"){
                    count++;
                }
        string ques_4;
        cout<<" \nQUESTION 4:   which layer of atmosohere contain ozone layer: \n"
                "A. Troposphere \n"
                "B. Exosphere \n"
                "C. Mesosphere \n"
                "D. Stratosphere\n ";
                cin>>ques_4;
                cout<<"......................................................................................................";
                if(ques_4=="D" || ques_4=="d"){
                    count++;
                }
                
        string ques_5;
        cout<<" \nQUESTION 5:   what is the chemical symbol for gold : \n"
                "A. Gd \n"
                "B. Ag \n"
                "C. Au \n"
                "D. fe \n ";
                cin>>ques_5;
                cout<<"......................................................................................................\n";
                if(ques_5=="c" || ques_5=="C"){
                    count++;
                }   
            
        if(count==5){
            cout<<"\t\tYOU WON THE QUIZ\n";
            cout<<"Your SCORE : "<<count<<"/5"<<endl ;
            break;
        }
        else {
            cout<<"\t\tOOPS YOU LOST\n";
            cout<<"Your SCORE : "<<count<<"/5"<<endl ;
            cout<<"..............................................................................................................................\n\n";    
        }
    }
    return 0;
}
