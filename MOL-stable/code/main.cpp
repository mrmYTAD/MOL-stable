/*

	this file will contain the main function only, that will call other functions from header files

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() {

    bool app = true;
    char chose;
    string path;

    while (app) {

        cout << "input here:" << endl;
        cout << "1 to open a file \t 2 to create a new file or project \t 3  to close " << endl;
        cin >> chose;

        while (chose != '1' && chose != '2' && chose != '3') {

            cout << "error: not valid input..." << endl;
            cout << "1 to open a file \t 2 to create a new file or project \t 3  to close " << endl;
            cin >> chose;

        }

        if (chose == '1') //take as input a file, check if it exist, open it, set "bool fileopened = true" so on the next menu there will appear chose 4 = execute opened file

    }


    //start of "execute opened file" (checking the extention .mol)
    string mainfile = "main.mol";
    string filecreated;

    cout << "write the name of the file you want to create: only .mol files are compatible" << endl;
    cin >> filecreated;

    int inputSize = filecreated.size();
    int n = 4; //because .mol are 4 chars

    while ((n > 0 && inputSize > n) ? input.substr(inputSize - n) : "" != ".mol") {

        cout << "the file must be with .mol extention" << endl;
        cout << "write the name of the file you want to create" << endl;
        cin >> filecreated;
        inputSize = filecreated.size();

    }

    ifstream infile(mainfile);
    char ch;

}

/*

    string filename;

    cin >> filename;

    string newnewfilename = "createdcode/"; (path)

    string newfilename = filename.substr(0, filename.find_last_of('.')) + ".mol";  (adds .mol automatically)

    for (int i = 0; newfilename[i] != '\0'; i++)
    {
        newnewfilename.push_back(newfilename[i]);
    }

    ofstream o(newnewfilename.c_str());

*/
