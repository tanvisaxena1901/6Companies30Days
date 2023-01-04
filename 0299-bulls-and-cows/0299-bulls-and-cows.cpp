class Solution {
public:
    string getHint(string secret, string guess) {
      
        int bull = 0;
        int cow = 0;
        unordered_map<char, int> um1, um2;
        for (int i = 0; i < secret.size(); i++)
        {
            if (secret[i] == guess[i]) bull++;
            else
            {
                um1[secret[i]]++;
                um2[guess[i]]++;
            }
        }
        
        for (char c = '0'; c <= '9'; c++)
        {
            cow += min(um1[c], um2[c]);
        }
        
        return std::to_string(bull) + 'A' + std::to_string(cow) + 'B';
    
    }
};