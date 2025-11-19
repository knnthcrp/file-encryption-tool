#include <iostream>
#include <string>
#include <vector>
#include "encryption.cpp"
#include "decryption.cpp"
#include <fstream>

using namespace std;

int main() {
string password, outputFileName, inputFileName;


vector<unsigned char> encryptedFile;
vector<unsigned char> decryptFile;
vector<unsigned char> decryptedFile;
vector<unsigned char> fileData;

cout << "Enter the name of the file: ";
getline(cin, inputFileName);

cout << "Enter your password: ";
getline(cin, password);

if (password.size() == 0){
    cout << "Please enter your password.";
    return 1;
}

ifstream inputFile(inputFileName, ios::binary);

if(!inputFile.is_open()){
    cout << "Error: Cannot open the file" << endl;
    return 1;
}

fileData = vector<unsigned char>(
    istreambuf_iterator<char>(inputFile),
    istreambuf_iterator<char>()
);

encryptFile(fileData, password, encryptedFile);

for (unsigned char c : encryptedFile) {
    printf("%02X ", c); // prints each byte as two-digit hex
}
cout << endl;


}