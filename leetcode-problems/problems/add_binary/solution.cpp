class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        while( a.length() != b.length()){
            if(a.length() > b.length()){
                b.insert(b.begin(),'0');
            }
            else{
                a.insert(a.begin(),'0');
            }
        }
        int endIndex = a.length() - 1;
        int remindar = 0;
        while(endIndex >= 0){
            int curr = a[endIndex] + b[endIndex] + remindar - 48 - 48;
            
            if(curr < 2){
                result = std::to_string(curr) + result;
                remindar = 0;
            }
            else if( curr == 2){
                result.insert(result.begin(), '0');
                remindar = 1;
            }
            else if( curr == 3){
                result.insert(result.begin(), '1');
                remindar = 1;
            }
            endIndex--;
            //cout<<result<<" "<< curr<< endl;
        }
        if(remindar){
            result.insert(result.begin(), '1');
            remindar = 0;
        }
        return result;
    }
};