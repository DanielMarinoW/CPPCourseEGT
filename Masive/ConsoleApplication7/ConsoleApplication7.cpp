

#include <iostream>
using namespace std;
int main()
{
    
    //int arr[2][4] = {
       // {11,12,45,55},//row 0 values
        //{23,45,56,77}, // row 1 values
   // };

    //for (int i = 0; i < 2; i++) {
      //  for (int j = 0; j < 4; j++) {
            //cout << arr[i][j] << " ";
       // }
       // cout << endl;
    //}

    int arr[100][100];
    int r;
    cin >> r;
    int s;
    cin >> s;

    long products = 1;
    int count = 0;

    string months[3] = { "JANUARY","FEBRUARY","MARTCH" };


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < s; j++) {
            cout << "enter number";
            cin >> arr[i][j];


        }

    }
    //for (int i = 0; i < r; i++) {
        //for (int j = 0; j < s; j++) {
            
           
           // cout << arr[i][j] << " ";

        //}
        //cout << endl; 
        //}

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < s; j++) {
            if (arr[i][j] == 20) {
                cout << "mont is" << i + 1 << endl;

                cout << "month is;  " << months[i] << endl;


                //switch (i + 1) {
                //case 1: cout << "JANUARY";
                   // break;
                //case 2: cout << "february";
                   // break;
               //}
                cout << "Day is  " << j + 1 << endl;

                count++;
            }
        }

    cout << "gradusi nad 20" << " " << count;
    }
    

