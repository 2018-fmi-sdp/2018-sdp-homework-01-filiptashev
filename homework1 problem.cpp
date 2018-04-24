#include <iostream>

#include <cstring>
#include <cstdlib>

using namespace std;


int main()
{

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
                cout << "ERROR wrong register number" << endl;
                continue;
            }
            int reg = *arguments - '0';
            arguments += 2;
            char* endOfNumber = NULL;
            long number = strtol(arguments, &endOfNumber, 0);
            if (!endOfNumber || *endOfNumber != '\0'|| number < -100 || number > 100) {
                cout << "ERROR wrong register value" << endl;
                continue;
            }
            registers[reg] = number;
            cout << "OK" << endl;
        }
        if (strncmp(line, "asm.reg.add ", strlen("asm.reg.add ")) == 0) {
            char* arguments = line + strlen("asm.reg.add ");
            if (*arguments < '0' || *arguments > '9' || arguments[1] != ' ') {
                cout << "ERROR wrong furst register number" << endl;
                continue;
            }
            int reg1 = *arguments - '0';
            arguments += 2;
             if (*arguments < '0' || *arguments > '9' || arguments[1] != ' ') {
                cout << "ERROR wrong second register number" << endl;
                continue;
            }
            int reg2 = *arguments - '0';
            arguments += 2;
            if (*arguments < '0' || *arguments > '9' || arguments[1] != '\0') {
                cout << "ERROR wrong thurd register number" << endl;
                continue;
            }
            int reg3 = *arguments - '0';

            int sum = registers[reg2] + registers[reg3];
            if (sum > 100 || sum < -100) {
                cout << "ERROR sum of register values exxcides limit" << endl;
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

    }
    return 0;
}
