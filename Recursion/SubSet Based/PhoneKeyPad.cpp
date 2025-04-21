    #include<bits/stdc++.h>

    using namespace std;

    string keys[] = {
        "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS","TUV", "WXYS"
    };

    void phoneKeyPad(char *in, char *out, int i, int j){
        //Base Case
        if(in[i] == '\0'){
            out[j] = '\0';
            cout << out << endl;
            return;
        }

        // recursive Case
        int digit = in[i] - '0';
        for(int k  = 0; keys[digit][k] != '\0'; k++){
            out[j] = keys[digit][k];
            phoneKeyPad(in,out,i+1, j+1);
        }

    }
    int main()

    {
        char in[100];
        char out[100];

        cin >> in;

        phoneKeyPad(in, out, 0 , 0);
    return 0;
    }