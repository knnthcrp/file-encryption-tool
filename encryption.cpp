#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<unsigned char> encryptFile(const vector<unsigned char>& fileData, const string& password, vector<unsigned char>& encryptedFile) {
    
    if (password.size() == 0){
        cout << "You cannot proceed without a password";
    }
    else{
        encryptedFile.resize(fileData.size());
        for (int i = 0; i < fileData.size(); i++){
            encryptedFile[i] = fileData[i] ^ password[i % password.size()];
        }
        return encryptedFile;
    }
}

void saveEncryptedFile(const vector<unsigned char>& encryptedData, string& outputFileName){

}