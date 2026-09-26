class Solution {
public:
    bool Isvowel(char c){
        if (c=='A'|| c=='E' || c == 'I'||c=='O' || c == 'U'||c=='a'|| c=='e' || c == 'i'||c=='o' || c == 'u')
           return true;
        else
          return false;

    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(Isvowel(s[i]) and Isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if (Isvowel(s[i]) and not Isvowel(s[j]))
               j--;
            else
              i++;

        }
        return s;
        
    }
};