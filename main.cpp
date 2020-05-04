#include <iostream>

using namespace std;

int main()
{
        int MB, Kbytes, Bytes, vlan;
        cout <<"\n\nInforme a Vlan do cliente: ";
        cin >> vlan;
        cout <<"\nInforme o valor em MB: ";
        cin >>MB;
        cout << endl;
        Bytes = 1048576 * MB;
        Kbytes = 1024 * MB;
        //cout << "\n\nPolicy-map receberá " << Bytes << " e " << Kbytes << endl;
        cout << "#IMPUT \n\npolicy-map PM_VLAN" << vlan << "_INPUT \nclass CLASS_VLAN" << vlan << "_INPUT \npolice " << Bytes << " " << Kbytes << " conform-action set-dscp-transmit default exceed-action drop\n\n";
        cout << "#OUTPUT \n\npolicy-map PM_VLAN" << vlan << "_OUTPUT \nclass CLASS_VLAN" << vlan << "_OUTPUT \npolice " << Bytes << " " << Kbytes << " conform-action set-dscp-transmit default exceed-action drop\n\n";
}
