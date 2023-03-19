#include <iostream>
using namespace std;

int main() {
    bool again = true;
    while (again)
    {
    
        string res;
        cout << "Enter the circuit type and the resistances: ";
        getline(cin, res);
        string volt;
        cout << "Enter the voltage: ";
        getline(cin, volt);
        
        float resistance = 0;
        float voltage = stof(volt);

        float r1 = stof(res.substr(2, 1));
        float r2 = stof(res.substr(4, 1));
        float r3 = stof(res.substr(6, 1));

        if(res[0] == 'S'){
            resistance = r1 + r2 + r3;
        }else if(res[0] == 'P'){
            resistance = (r1 * r2 * r3) / (r1 * r2 + r2 * r3 + r3 * r1);
        }
        float intensity = voltage / resistance;

        cout << "The resistance is: " << resistance << endl;
        cout << "The intensity is: " << intensity << endl;
        cout << "Do you want to calculate another circuit? (Y/N): ";
        string answer;
        getline(cin, answer);
        if(answer[0] == 'N'){
            again = false;
        }
    }

    return 0;
}