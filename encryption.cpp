#include <iostream>
#include <string>
#include <vector>

using namespace std;

void encryptFile(const vector<unsigned char>& fileData, const string& password, vector<unsigned char>& encryptedFile) {
    encryptedFile.resize(fileData.size());
    for (int i = 0; i < fileData.size(); i++){
        encryptedFile[i] = fileData[i] ^ password[i % password.size()];
    }
}

void saveEncryptedFile(const vector<unsigned char>& encryptedData, string& outputFileName){

}