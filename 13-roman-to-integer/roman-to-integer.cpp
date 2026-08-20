class Solution {
public:
    int romanToInt(string s) {
       char arr1[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int arr2[] = {1, 5, 10, 50, 100, 500, 1000};

        int ans=0;
        for(int i=0;i<s.length();i++){
            int curr=0;
            int nex=0;
            for(int j=0;j<7;j++ ){
                if(s[i]==arr1[j]){
                    curr=arr2[j];
                    break;
                }
            }
            if(i+1<s.length()){
                for(int j=0;j<7;j++ ){
                if(s[i+1]==arr1[j]){
                    nex=arr2[j];
                    break;
                }
            }
            }
            if(curr<nex)    ans-=curr;
            else  ans+=curr;
        }return ans;
    }
};