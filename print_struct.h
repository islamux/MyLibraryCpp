#include <iostream>
using namespace std;


void PrintStruct(stCashPaidTotalBill readCashFunc){

    cout << "Cash = "<<readCashFunc.CashPaid << "\n" << "Bill = " << readCashFunc.TotalBill <<"\n";
}