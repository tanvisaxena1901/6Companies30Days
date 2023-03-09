class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        for(char &c: firstWord) c -= 'a' - '0';
		for(char &c: secondWord) c -= 'a' - '0';
		for(char &c: targetWord) c -= 'a' - '0';
		return stoi(firstWord) + stoi(secondWord) == stoi(targetWord);
    }
};