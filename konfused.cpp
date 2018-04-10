#include <iostream>

#include <cstring>
#include <cstdlib>

using namespace std;


int main()
{
double TKsem,Kt01,Kt02,Kz01,Kz02,TK,It,Iz,I, O,PracticeAttendance,SemAttendance;
bool PracticePass;
    char line[1000];
    char prompt[100] = ">";
    int registers[10] = {};

    while(true) {
        cout << prompt << " ";
        cin.getline(line, 1000);
        if (strcmp(line, "quit") == 0){
            break;
        };
        if (strcmp(line, "help") == 0) {
            cout << "Supported commands:" << endl
                 << "quit" << endl
                 << "cmd.prompt" << endl
                 << "asm.reg.set" << endl
                 << "asm.reg.add" << endl
                 << "asm.reg.dbg" << endl
                 << "help" << endl;
        };
        if (strncmp(line, "cmd.prompt ", strlen("cmd.prompt ")) == 0) {
            char* argument = line + strlen("cmd.prompt ");
            if (strlen(argument) < 100 && *argument != '\0')
                strcpy(prompt, argument);
        }
        if (strncmp(line, "asm.reg.set ", strlen("asm.reg.set ")) == 0) {
            char* arguments = line + strlen("asm.reg.set ");
             if (*arguments < '0' || *arguments > '9' || arguments[1] != ' ') {
                cout << "ERROR" << endl;
                continue;
            }
            int reg = *arguments - '0';
            arguments += 2;
            char* endOfNumber = NULL;
            long number = strtol(arguments, &endOfNumber, 0);
            if (!endOfNumber || *endOfNumber != '\0'|| number < -100 || number > 100) {
                cout << "ERROR" << endl;
                continue;
            }
            registers[reg] = number;
            cout << "OK" << endl;
        }
        if (strncmp(line, "asm.reg.add ", strlen("asm.reg.add ")) == 0) {
            char* arguments = line + strlen("asm.reg.add ");
            if (*arguments < '0' || *arguments > '9' || arguments[1] != ' ') {
                cout << "ERROR" << endl;
                continue;
            }
            int reg1 = *arguments - '0';
            arguments += 2;
             if (*arguments < '0' || *arguments > '9' || arguments[1] != ' ') {
                cout << "ERROR" << endl;
                continue;
            }
            int reg2 = *arguments - '0';
            arguments += 2;
            if (*arguments < '0' || *arguments > '9' || arguments[1] != '\0') {
                cout << "ERROR" << endl;
                continue;
            }
            int reg3 = *arguments - '0';

            int sum = registers[reg2] + registers[reg3];
            if (sum > 100 || sum < -100) {
                cout << "ERROR" << endl;
                continue;
            }

            registers[reg1] = sum;
            cout << "OK" << endl;

        }
         if (strncmp(line, "asm.reg.dbg", strlen("asm.reg.dbg")) == 0) {
            for (int i=0; i < 10; i++) {
                cout << "REG_" << i << " = " << registers[i] << endl;
            }

        }
        if (strncmp(line, "fn11245.info ", strlen("fn11245.info ")) == 0){
            cout<<"Filip Tashev Matematika 2017";
        }

        if (strncmp(line, "fn11245.sdp.info ", strlen("fn11245.sdp.info ")) == 0){
            cout<<"O=2/3*TK+1/3*I"<<endl<<"TK=1/5(Kt01+Kt02+Kz01+Kz02+TKsem)"<<endl<<"I=1/2*(It+Iz)"<<endl<<"Oswobovdawane ot kontrolni teoriq i zadaci e vyzmovno pri sredna ocenka nad 4,50 i dvete ocenki nad 3.50.Osvobovdawaneto stava sys srednata ocenka;"<<endl<<"Wyzmovno e i oswobovdawane pri80% prisystwie na seminaar i praktikum s Sem TK>5.00;Osvobovdawaneto stava s 3;";
        }

if (strncmp(line, "fn11245.sdp.TKsem ", strlen("fn11245.sdp.TKsem ")) == 0){
        char* arguments = line + strlen("fn11245.sdp.TKsem ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERRereOR" << endl;
}else{TKsem=*arguments - '0';cout<<"ok";};}
if (strncmp(line, "fn11245.sdp.Kt01 ", strlen("fn11245.sdp.Kt01 ")) == 0){
        char* arguments = line + strlen("fn11245.sdp.Kt01 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kt01=*arguments - '0';};}
if (strncmp(line, "fn11245.sdp.Kt02 ", strlen("fn11245.sdp.Kt02 ")) == 0){
     char* arguments = line + strlen("fn11245.sdp.Kt02 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kt02=*arguments - '0';};}
if (strncmp(line, "fn11245.sdp.Kz01 ", strlen("fn11245.sdp.Kz01 ")) == 0){
        char* arguments = line + strlen("fn11245.sdp.Kz01 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kz01=*arguments - '0';};}
if (strncmp(line, "fn11245.sdp.Kz02 ", strlen("fn11245.sdp.Kz02 ")) == 0){
        char* arguments = line + strlen("fn11245.sdp.Kz02 ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{Kz02=*arguments - '0';};}
if (strncmp(line, "fn11245.sdp.Iz ", strlen("fn11245.sdp.Iz ")) == 0){
        char* arguments = line + strlen("fn11245.sdp.Iz ");
            if (*arguments < '2' || *arguments > '6') {
                cout << "ERROR" << endl;
}else{Iz=*arguments - '0';};}
if (strncmp(line, "fn11245.sdp.It ", strlen("fn11245.sdp.It ")) == 0){
        char* arguments = line + strlen("fn11245.sdp.It ");
            if (*arguments < '2' || *arguments > '6' ) {
                cout << "ERROR" << endl;
}else{It=*arguments - '0';};}
if (strncmp(line, "fn11245.sdp.SemAttendance ", strlen("fn11245.sdp.SemAttendance ")) == 0){
 char* arguments = line + strlen("fn11245.sdp.SemAttendance ");
   char* endOfNumber = NULL;
            long number = strtol(arguments, &endOfNumber, 0);
              if(number>-1&&number<101){SemAttendance=number;
            }else {cout<<"ERROR";}
}
if (strncmp(line, "fn11245.sdp.PracticeAttendance ", strlen("fn11245.sdp.PracticeAttendance ")) == 0){
 char* arguments = line + strlen("fn11245.sdp.PracticeAttendance ");
   char* endOfNumber = NULL;
            long number = strtol(arguments, &endOfNumber, 0);
            if(number>-1&&number<101){PracticeAttendance=number;
            }else {cout<<"ERROR";}
}
if (strncmp(line, "fn11245.sdp.PracticePass fales", strlen("fn11245.sdp.PracticePass fales")) == 0){
PracticePass=false;
}
if (strncmp(line, "fn11245.sdp.PracticePass true", strlen("fn11245.sdp.PracticePass true")) == 0){
PracticePass=true;
}
if (strncmp(line, "fn11245.sdp.marks ", strlen("fn11245.sdp.marks ")) == 0){
    cout<<"TKsem="<<TKsem<<endl<<"Kt01="<<Kt01<<endl<<"Kt02="<<Kt02<<endl<<"Kz01="<<Kz01<<endl<<"Kz02="<<Kz02<<endl<<"TK="<<((1/5)*(TKsem+Kt01+Kt02+Kz01+Kz02))<<endl;
    cout<<"It="<<It<<" Can skip? ";if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9){cout<<"yes"<<(Kt01+Kt02)/2;}else{cout<<"no";};
     cout<<"Iz="<<Iz<<" Can skip? ";if(Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<"yes"<<(Kz01+Kz02)/2;}else{cout<<"no";};
    cout<<"I="<<((Iz+It)/2);cout<<" Skip T? " ;if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9){cout<<" yes "<<((Kt01+Kt02)/2);}else{cout<<" no ";} cout<<" Skip Z? ";if(Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<" yes "<<(Kz01+Kz02)/2;}else{cout<<" no ";}; cout<<" Skip Both? "<<endl;
    if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9&&Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<((1/4)*(Kt01+Kt02+Kz01+Kz02));}
    cout<<endl<<" O= "<<((2/15)*(TKsem+Kt01+Kt02+Kz01+Kz02))+((1/6)*(Iz+It));cout<<" Skip T ?";if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9){cout<<" yes "<<((Kt01+Kt02)/2);}else{cout<<" no ";} cout<<" Skip Z? ";if(Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<" yes " <<((Kz01+Kz02)/2);}else{cout<<" no ";}; cout<<" Skip Both? "<<endl;
    if(Kt01>=3.50&&Kt02>=3.50&&Kt01+Kt02>=9&&Kz01>=3.50&&Kz02>=3.50&&Kz01+Kz02>=9){cout<<((1/4)*(Kt01+Kt02+Kz01+Kz02));}
    cout<<"Skip with Average?";if(SemAttendance>80&&PracticeAttendance>80&&PracticePass==true){cout<<" yes ";}else{cout<<" no ";}
;}

    }
    return 0;
}
