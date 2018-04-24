#include <iostream>

#include <cstring>


using namespace std;

int main()
{
    int a;
    double TKsem,Kt01,Kt02,Kz01,Kz02,TK,It,Iz,I, O,PracticeAttendance,SemAttendance;
    bool PracticePass;
    char line[1000];

    while(true) {
a=1;
        cin.getline(line, 1000);
        if (strncmp(line, "fn11245.info", strlen("fn11245.info")) == 0) {a=0;
 cout<<"Filip Tashev Matematika 2017"<<endl;
        }
        if (strncmp(line, "fn11245.sdp.marks", strlen("fn11245.sdp.marks")) == 0){a=0;
             cout<<"TKsem="<<TKsem<<endl<<"Kt01="<<Kt01<<endl<<"Kt02="<<Kt02<<endl<<"Kz01="<<Kz01<<endl<<"Kz02="<<Kz02<<endl<<"TK="<<((TKsem+Kt01+Kt02+Kz01+Kz02)/5)<<endl;
    cout<<"It="<<It<<" Can skip? ";if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9){cout<<"yes"<<(Kt01+Kt02)/2;}else{cout<<"no";};
     cout<<" Iz="<<Iz<<" Can skip? ";if(Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<"yes"<<(Kz01+Kz02)/2;}else{cout<<"no";};
    cout<<" I="<<((Iz+It)/2);cout<<" Skip T? " ;if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9){cout<<" yes "<<((Kt01+Kt02)/2);}else{cout<<" no ";} cout<<" Skip Z? ";if(Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<" yes "<<(Kz01+Kz02)/2;}else{cout<<" no ";}; cout<<" Skip Both? ";
    if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9&&Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<((Kt01+Kt02+Kz01+Kz02)/4);}
    cout<<endl<<" O= "<<(2*(TKsem+Kt01+Kt02+Kz01+Kz02))/15+(Iz+It)/6;cout<<" Skip T ?";if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9){cout<<" yes "<<((Kt01+Kt02)/2);}else{cout<<" no ";} cout<<" Skip Z? ";if(Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<" yes " <<((Kz01+Kz02)/2);}else{cout<<" no ";}; cout<<" Skip Both? ";
    if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9&&Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<((Kt01+Kt02+Kz01+Kz02)/4);}
    cout<<endl<<"Skip with Average?";if(SemAttendance>80&&PracticeAttendance>80&&PracticePass==true){cout<<" yes ";}else{cout<<" no ";}
    cout<<endl;
;}



        if (strncmp(line, "fn11245.sdp.info", strlen("fn11245.sdp.info")) == 0){a=0;
            cout<<"O=2/3*TK+1/3*I"<<endl<<"TK=1/5(Kt01+Kt02+Kz01+Kz02+TKsem)"<<endl<<"I=1/2*(It+Iz)"<<endl<<"Oswobovdawane ot kontrolni teoriq i zadaci e vyzmovno pri sredna ocenka nad 4,50 i dvete ocenki nad 3.50.Osvobovdawaneto stava sys srednata ocenka;"<<endl<<"Wyzmovno e i oswobovdawane pri80% prisystwie na seminaar i praktikum s Sem TK>5.00;Osvobovdawaneto stava s 3;";
        ;cout<<endl;}
            if (strncmp(line, "fn11245.sdp.TKsem ", strlen("fn11245.sdp.TKsem ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.TKsem ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{TKsem=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.Kt01 ", strlen("fn11245.sdp.Kt01 ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.Kt01 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kt01=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.Kt02 ", strlen("fn11245.sdp.Kt02 ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.Kt02 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kt02=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.Kz01 ", strlen("fn11245.sdp.Kz01 ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.Kz01 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kz01=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.Kz02 ", strlen("fn11245.sdp.Kz02 ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.Kz02 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kz02=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.Iz ", strlen("fn11245.sdp.Iz ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.Iz ");
            if (*arguments < '2' || *arguments > '6') {
                cout << "ERROR" << endl;
}else{Iz=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.It ", strlen("fn11245.sdp.It ")) == 0)
                {a=0;
        char* arguments = line + strlen("fn11245.sdp.It ");
            if (*arguments < '2' || *arguments > '6') {
                cout << "ERROR" << endl;
}else{It=*arguments - '0';};}
            if (strncmp(line, "fn11245.sdp.SemAttendance ", strlen("fn11245.sdp.SemAttendance ")) == 0)
                {a=0;
 char* arguments = line + strlen("fn11245.sdp.SemAttendance ");
   char* endOfNumber = NULL;
            long number = strtol(arguments, &endOfNumber, 0);
              if(number>-1&&number<101){SemAttendance=number;
            }else {cout<<"ERROR";}
}
            if (strncmp(line, "fn11245.sdp.PracticeAttendance ", strlen("fn11245.sdp.PracticeAttendance ")) == 0)
                {a=0;
 char* arguments = line + strlen("fn11245.sdp.PracticeAttendance ");
   char* endOfNumber = NULL;
            long number = strtol(arguments, &endOfNumber, 0);
              if(number>-1&&number<101){PracticeAttendance=number;
            }else {cout<<"ERROR";}
}
            if (strncmp(line, "fn11245.sdp.PracticePass ", strlen("fn11245.sdp.PracticePass ")) == 0){a=0;if (strncmp(line, "fn11245.sdp.PracticePass fales", strlen("fn11245.sdp.PracticePass fales")) == 0){
PracticePass=false;
}
else if (strncmp(line, "fn11245.sdp.PracticePass true", strlen("fn11245.sdp.PracticePass true")) == 0){
PracticePass=true;
}else {cout<<"EROR";}
};


if (a==1){cout<<"not comand"<<endl;};
    };
    return 0;
}

