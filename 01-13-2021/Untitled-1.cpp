#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream inFS;
    ofstream outFS;
    string inputFile;
    string outputFile;
    int vctrSum;
    unsigned int i;

    // Assign to inputFile value of 2nd command line argument
    inputFile = argv[1];
    // Assign to outputFile value of 3rd command line argument
    outputFile = argv[2];
    // Create input stream and open input csv file.
    inFS.open(inputFile);
    // Verify file opened correctly.
    // Output error message and return 1 if file stream did not open correctly.
    if (!inFS.is_open())
    {
        cout << "Could not open file " << inputFile << endl;
        exit(1);
    }
    // Read in integers from input file to vector.
    vector<int> fileVctr;
    string line;
    getline(inFS, line);
    istringstream inSS(line);
    string strInt;
    while (getline(inSS, strInt, ','))
    {
        fileVctr.push_back(stoi(strInt));
    }
    //     if (!inFS.eof()) {
    //       cout << "Input failure before reaching end of file." << endl;
    //    }
    // Close input stream.
    inFS.close();
    // Get integer average of all values read in.
    for (i = 0; i < fileVctr.size(); ++i)
    {
        vctrSum = vctrSum + fileVctr.at(i);
    }
    int intAvg = vctrSum / fileVctr.size();

    // Convert each value within vector to be the difference between the original value and the average.
    for (i = 0; i < fileVctr.size(); ++i)
    {
        int intDiff = fileVctr.at(i) - intAvg;
        fileVctr.at(i) = intDiff;
    }
    // Create output stream and open/create output csv file.
    outFS.open(outputFile);
    // Verify file opened or was created correctly.
    // Output error message and return 1 if file stream did not open correctly.
    if (!outFS.is_open())
    {
        cout << "Could not open file " << outputFile << endl;
        exit(1);
    }
    // Write converted values into ouptut csv file, each integer separated by a comma.
    for (i = 0; i < fileVctr.size(); ++i)
    {
        if (i != fileVctr.size() - 1)
        {
            outFS << to_string(fileVctr.at(i)) << ", ";
        }
        else
        {
            outFS << to_string(fileVctr.at(i));
        }
    }
    // Close output stream.
    outFS.close();

    return 0;
}